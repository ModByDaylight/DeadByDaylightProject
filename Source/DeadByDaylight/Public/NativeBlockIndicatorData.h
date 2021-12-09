#pragma once
#include "CoreMinimal.h"
#include "NativeBlockIndicatorData.generated.h"

class UCurveFloat;
class UActorComponent;

USTRUCT(BlueprintType)
struct FNativeBlockIndicatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsBlockActive;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsBlockUpdating;
    
    UPROPERTY(BlueprintReadWrite)
    float CurrentBlockFade;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* FadeCurve;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UActorComponent* BlockIndicator;
    
    DEADBYDAYLIGHT_API FNativeBlockIndicatorData();
};

