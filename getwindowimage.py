import win32gui #操作windows窗口
from win32gui import *
from PIL import ImageGrab
import win32con #系统操作

names = set()
#获取窗口名称
def get_window_title(window,nouse):
    if win32gui.IsWindow(window):
        names.add(win32gui.GetWindowText(window))

win32gui.EnumWindows(get_window_title,0)
list1=[name for name in names if name]
for n in list1:
    print('活动窗口：',n)
    print('\n..........')

name_a=input('请输入需要截图的活动窗口名称：\n')
window=win32gui.FindWindow(0,name_a)
win32gui.ShowWindow(window,win32con.SW_MAXIMIZE)

x_start,y_start,x_end,y_end=GetWindowRect(window)
#location
box=(x_start,y_start,x_end,y_end)
image=ImageGrab.grab(box)
image.show()
image.save('test.png')
print('截图完成')
