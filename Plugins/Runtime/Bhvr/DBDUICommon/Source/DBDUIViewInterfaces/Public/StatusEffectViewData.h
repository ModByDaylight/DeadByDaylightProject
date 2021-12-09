#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "StatusEffectViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FStatusEffectViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStatusEffectType StatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Percentage;
    
    FStatusEffectViewData();
};

