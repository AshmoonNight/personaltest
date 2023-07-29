// Fill out your copyright notice in the Description page of Project Settings.

//��������Ҫ��ϸָ�������ļ�
#include "pushcubeactor.h"
#include "GameFrameWork/Actor.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
Upushcubeactor::Upushcubeactor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these featur
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	Force = 300.0f;
	ForceLenth = 300.0f;

	// ...
}


// Called when the game starts
void Upushcubeactor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void Upushcubeactor::StartPushing(bool spawnCube)
{
	if (GetOwner()) {
		FVector Start = GetOwner()->GetActorLocation();
		FVector End = Start + (GetOwner()->GetActorForwardVector() * ForceLenth); //ForceLenth ΪPreset����,UE�ڵ���
		if (spawnCube && SpawnedCube) {
			//����Cube
			GetWorld()->SpawnActor<AActor>(SpawnedCube, End, FRotator(0, 0, 0));

		}

		//��������,ʩ����,������ɫǰ���Ƿ���Static Mesh
		FHitResult Hit;
		FCollisionQueryParams QParams;
		bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility,QParams);
		//��ȡ���߼�⵽������,��ȡStatic Mesh
		if (bHit) {
			UStaticMeshComponent* SMComp = Cast<UStaticMeshComponent>(Hit.GetActor()->GetRootComponent());
			bool CubeMovable = Hit.GetActor()->IsRootComponentMovable();
			if (CubeMovable && SMComp) {
				//��ʾ�����õ�����
				DrawDebugLine(GetWorld(), Start, End, FColor::Blue, false, 0.5f);
				//push
				SMComp->AddImpulse(GetOwner()->GetActorForwardVector() * SMComp->GetMass() * Force);
			}

		}
	}
}




// Called every frame


