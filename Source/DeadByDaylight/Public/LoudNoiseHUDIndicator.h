#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LoudNoiseIndicatorData.h"
#include "UObject/NoExportTypes.h"
#include "LoudNoiseHUDIndicator.generated.h"

class UStaticMesh;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoudNoiseHUDIndicatorLoudNoiseAddedEvent);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API ULoudNoiseHUDIndicator : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* MaskMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* DistortionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EdgePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CornerRoundness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScreenFadeOutDistance;
    
    UPROPERTY(BlueprintAssignable)
    FLoudNoiseHUDIndicatorLoudNoiseAddedEvent LoudNoiseAddedEvent;
    
private:
    UPROPERTY(Transient)
    TArray<FLoudNoiseIndicatorData> _trackedNoises;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTrackedNoise(FVector location, float duration);
    
    ULoudNoiseHUDIndicator();
};

