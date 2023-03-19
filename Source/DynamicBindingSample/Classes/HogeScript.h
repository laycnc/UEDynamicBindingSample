// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HogeScript.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class DYNAMICBINDINGSAMPLE_API UHogeScript : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION( BlueprintCallable )
	void Initialize();

	UFUNCTION(BlueprintCallable)
	void Finalize();


	virtual UWorld* GetWorld() const override;

};
