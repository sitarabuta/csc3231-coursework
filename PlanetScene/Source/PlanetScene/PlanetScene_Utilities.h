// Copyright 2022 Stefan-Ionut Barbu. All Rights Reserved.

#pragma once
#pragma comment(lib, "dxgi.lib")

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlanetScene_Utilities.generated.h"

/**
 * 
 */
UCLASS()
class PLANETSCENE_API UPlanetScene_Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "PlanetScene|Utilities", meta = (WorldContext = "WorldContextObject"))
		static int64 getVRAMUsage();
};
