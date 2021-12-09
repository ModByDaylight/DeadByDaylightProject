#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoQualityAdjuster.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AAutoQualityAdjuster : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TargetResolutionScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumMS;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaximumMS;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScaleIncreaseRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScaleDecreaseRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumAllowableScale;
    
public:
    AAutoQualityAdjuster();
};

