// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CatapultGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTDAGR_API ACatapultGameMode : public AGameModeBase
{
	GENERATED_BODY()

	public:
		void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessages) override;
		void IncreaseScore();
};
