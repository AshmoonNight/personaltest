# coding-utf-8
import sys
import time
import re
import psutil
import win32com.client
import xlsxwriter
from GPUtil import GPUtil
from numpy import mean
 
file_dir_path = "D:/自动化整理/test/"
 
 
def ntid(process_name):
    """
    根据进程名获取进程id
    :param process_name: 进程名
    :return:
    """
    # time.sleep(2)
    pids = psutil.pids()
    for pid in pids:
        if psutil.Process(pid).name() == process_name:
            # print(pid)
            return pid
 
 
def get_gpu_info():
    """
    获取Gpu信息
    :return: 已用显存，显存占用率，Gpu利用率
    """
    # GPUtil.showUtilization()
    gpu = GPUtil.getGPUs()
    print(gpu)
    # print(gpu.memoryUsed, gpu.memoryUtil * 100, gpu.load * 100)
    return gpu.memoryUsed, gpu.memoryUtil * 100, gpu.load * 100
 
 
def check_exsit(process_name):
    """
    判断进程是否存在
    :param process_name: 进程名
    :return: 进程存在返回真
    """
    wmi = win32com.client.GetObject('winmgmts:')
    process_codecov = wmi.ExecQuery('select * from Win32_Process where Name like "%{}%"'.format(process_name))
    if len(process_codecov) > 0:
        return True
    else:
        return False
 
 
def monitor_process(pid, interval=0.5):
    """
    抓取指定进程的CPU、内存信息
    :param pid: 进程id
    :param interval: 抓取间隔
    :return:
    """
    p = psutil.Process(pid)
    print("start_time: ", time.strftime('%m-%d %H:%M:%S', time.localtime(time.time())))
    keys = ["次数", "cpu利用率(%)", "所占内存(M)", "内存占用百分比(%)"]
    row = 0
    lines = [keys]
    open(file_dir_path + "log.txt", "w")
    while True:
        if check_exsit("chrome.exe") and row < 5: #指定进程名 & 获取次数
            row += 1
            cpu_percent = p.cpu_percent() / 6
            
            men_info = p.memory_info().rss / 1024 / 1024
            mem_percent = p.memory_percent()
            
            
            #gpu_used, gpu_util, gpu_load = get_gpu_info()#笔记本无显卡，跳过
            
            values = [row, cpu_percent, round(men_info, 2), round(mem_percent, 2)]
            #, round(gpu_used, 2),round(gpu_util, 2), round(gpu_load, 2) values参数存放
            lines.append(values)
            # GPUtil.showUtilization()
            print(row)
            with open(file_dir_path + "log.txt", "a+") as f:
                f.write(str(values)+"\n")
            time.sleep(interval)
        else:
            break
    print("end_time: ", time.strftime('%m-%d %H:%M:%S', time.localtime(time.time())))
    print("**************************", row, "**************************")
    
    return lines
 
 

 
 
def get_report(data, data2=None):
    """
    根据列表生成excel
    :param data: 抓取的性能信息，已列表传入
    :return:
    """
    ex = xlsxwriter.Workbook(file_dir_path + "report.xlsx")
    
    sheet = ex.add_worksheet(name="memory")
    print("passsheet")
    for i, value in enumerate(data):
        sheet.write_row('A{}'.format(i + 1), value)
    print("passvalue")
    chart_col = ex.add_chart({'type': 'line'})  # 新建图表格式 line为折线图
    print("passsline")
    chart_col.add_series({'name': '=memory!$C$1',
                          'categories': '=memory!$A$2:$A$' + str(len(data) - 1) + '',
                          'values': '=memory!$C$2:$C$' + str(len(data) - 1) + '',
                          'line': {'color': 'blue'}})
    chart_col.add_series({'name': '=memory!$E$1',
                          'categories': '=memory!$A$2:$A$' + str(len(data) - 1) + '',
                          'values': '=memory!$E$2:$E$' + str(len(data) - 1) + '',
                          'line': {'color': 'green'}})
 
    chart_col.set_title({'name': '内存使用状况'})
    chart_col.set_x_axis({'name': "次数"})
    chart_col.set_y_axis({'name': '内存值'})  # 设置图表表头及坐标轴
    chart_col.height = 600
    chart_col.width = 1000
    chart_col.set_style(1)
    sheet.insert_chart('J1', chart_col, {'x_offset': 25, 'y_offset': 10})  # 放置图表位置
 
    chart_col3 = ex.add_chart({'type': 'line'})  # 新建图表格式 line为折线图
    chart_col3.add_series({'name': '=memory!$B$1',
                           'categories': '=memory!$A$2:$A$' + str(len(data) - 1) + '',
                           'values': '=memory!$B$2:$B$' + str(len(data) - 1) + '',
                           'line': {'color': 'red'}})
    chart_col3.add_series({'name': '=memory!$D$1',
                           'categories': '=memory!$A$2:$A$' + str(len(data) - 1) + '',
                           'values': '=memory!$D$2:$D$' + str(len(data) - 1) + '',
                           'line': {'color': 'blue'}})
    chart_col3.add_series({'name': '=memory!$G$1',
                           'categories': '=memory!$A$2:$A$' + str(len(data) - 1) + '',
                           'values': '=memory!$G$2:$G$' + str(len(data) - 1) + '',
                           'line': {'color': 'black'}})
    chart_col3.set_title({'name': 'cpu、内存使用率'})
    chart_col3.set_x_axis({'name': "次数"})
    chart_col3.set_y_axis({'name': '使用率'})  # 设置图表表头及坐标轴
    chart_col3.height = 600
    chart_col3.width = 1000
    chart_col3.set_style(1)
    sheet.insert_chart('J32', chart_col3, {'x_offset': 25, 'y_offset': 10})  # 放置图表位置
   
    ex.close()
 
 
def main():
    try:
        pid = ntid("chrome.exe")
        print(pid)
        data1 = monitor_process(pid) #
        
        
        
        get_report(data1)
        
    except Exception as e:
        print(e)
        with open(file_dir_path + "main_error.log", "a+") as f:
            f.write(str(e))
 
 
if __name__ == "__main__":
    main()
