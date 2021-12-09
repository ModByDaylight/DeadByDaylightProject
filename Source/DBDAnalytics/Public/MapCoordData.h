#pragma once
#include "CoreMinimal.h"
#include "MapCoordData.generated.h"

USTRUCT(BlueprintType)
struct FMapCoordData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Type;
    
    UPROPERTY()
    FString Actor;
    
    UPROPERTY()
    int32 X;
    
    UPROPERTY()
    int32 Y;
    
    UPROPERTY()
    int32 Z;
    
    DBDANALYTICS_API FMapCoordData();
};

