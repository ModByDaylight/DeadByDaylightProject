#pragma once
#include "CoreMinimal.h"
#include "LoadingInfoData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLoadingInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Title;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(EditAnywhere)
    bool IsAvailableForKiller;
    
    UPROPERTY(EditAnywhere)
    bool IsAvailableForSurvivor;
    
    DEADBYDAYLIGHT_API FLoadingInfoData();
};

