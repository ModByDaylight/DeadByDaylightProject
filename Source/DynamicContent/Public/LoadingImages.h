#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "LoadingImagesHintInfo.h"
#include "LoadingImages.generated.h"

USTRUCT(BlueprintType)
struct DYNAMICCONTENT_API FLoadingImages {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName ID;
    
    UPROPERTY(Transient)
    TArray<FSlateBrush> Images;
    
    UPROPERTY(Transient)
    TArray<FLoadingImagesHintInfo> ImagesHintInfo;
    
    UPROPERTY(Transient)
    bool IsAvailableForSurvivor;
    
    UPROPERTY(Transient)
    bool IsAvailableForKiller;
    
    UPROPERTY(Transient)
    bool IsGenericImages;
    
    FLoadingImages();
};

