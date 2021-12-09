#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "LoadingImagesHintInfo.generated.h"

USTRUCT(BlueprintType)
struct DYNAMICCONTENT_API FLoadingImagesHintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText Title;
    
    UPROPERTY(Transient)
    FText Description;
    
    UPROPERTY(Transient)
    FSlateBrush Icon;
    
    UPROPERTY(Transient)
    bool IsAvailableForKiller;
    
    UPROPERTY(Transient)
    bool IsAvailableForSurvivor;
    
    FLoadingImagesHintInfo();
};

