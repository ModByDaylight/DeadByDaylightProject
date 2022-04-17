#pragma once
#include "CoreMinimal.h"
#include "LoudNoiseIndicatorData.h"
#include "Components/SceneComponent.h"
#include "LoudNoiseAddedEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "LoudNoiseHUDIndicator.generated.h"

class UStaticMesh;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
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
    FLoudNoiseAddedEvent LoudNoiseAddedEvent;
    
private:
    UPROPERTY(Transient)
    TArray<FLoudNoiseIndicatorData> _trackedNoises;
    
public:
    ULoudNoiseHUDIndicator();
    UFUNCTION(BlueprintCallable)
    void AddTrackedNoise(FVector location, float duration);
    
};

