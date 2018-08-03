// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrolingGuard.generated.h"

/**
 * 
 */
UCLASS()
class FPP_SHOOTER_API APatrolingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
public:		//TODO remove or create get
	UPROPERTY(EditInstanceOnly, Category = "PatrolRoute")
	TArray<AActor*> PatrolPointsCPP;
	
};
