// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "MyltiplayerSessionsSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMyltiplayerSessionsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:

	UMyltiplayerSessionsSubsystem();

protected:

private:

	IOnlineSessionPtr SessionInterface;

};
