// Copyright 2017-2019, Institute for Artificial Intelligence - University of Bremen

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "UROSCallbackRegisterBase.h"
#include "RWCManager.generated.h"


UCLASS()
class UROSCONTROL_API URWCManager : public UROSCallbackRegisterBase
{
	GENERATED_BODY()

public:
	URWCManager(){}
	~URWCManager(){}

	virtual void SetupServiceServers();

	virtual void Register(FString DefaultNamespace) override;

private:
	FString Namespace;
};
