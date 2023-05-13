// Fill out your copyright notice in the Description page of Project Settings.


#include "MyltiplayerSessionsSubsystem.h"
#include "OnlineSubsystem.h"

UMyltiplayerSessionsSubsystem::UMyltiplayerSessionsSubsystem()
{
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();

	if (Subsystem)
	{
		SessionInterface = Subsystem->GetSessionInterface();
	}
}
