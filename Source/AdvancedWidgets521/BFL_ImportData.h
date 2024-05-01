// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_ImportData.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDWIDGETS521_API UBFL_ImportData : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "File Import")
	static FString ImportFile(FString FileLocation);

};
