#pragma once
#include "CoreMinimal.h"
#include "EBlinkerState.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "BlinkerComponent.generated.h"

class ADBDPlayer;
class UDBDTimerComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UBlinkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _rayCastZOffet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _rayCastLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _minimumIndicatorVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _IndicatorVelocityEasingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _lineOfSightBlinkOffset;
    
private:
    UPROPERTY(Export, Transient)
    UDBDTimerComponent* _blinkChainTimer;
    
public:
    UFUNCTION(BlueprintCallable)
    FVector UpdateTargetLocation(ADBDPlayer* player, float blinkDistance, const TArray<float>& scanPercentLocations);
    
    UFUNCTION(BlueprintPure)
    bool ShouldInterpolateIndicatorPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void SetChainedBlinkCount(int32 blinkCount);
    
    UFUNCTION(BlueprintCallable)
    void SetBlinkerState(EBlinkerState blinkerState);
    
    UFUNCTION(BlueprintCallable)
    FVector LocalAddRandomToTargetLocation(ADBDPlayer* player, FVector targetLocation, float distance);
    
    UFUNCTION(BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementChainedBlinkCount();
    
    UFUNCTION(BlueprintPure)
    FVector GetInterpolatedIndicatorPosition(FVector blinkTarget, FVector indicatorPosition, float deltaTime) const;
    
    UFUNCTION(BlueprintPure)
    float GetFatigueDuration(ADBDPlayer* player, bool attacked, int32 blinkCount) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChainedBlinkCount() const;
    
    UFUNCTION(BlueprintPure)
    EBlinkerState GetBlinkerState() const;
    
    UFUNCTION(BlueprintPure)
    UDBDTimerComponent* GetBlinkChainTimer() const;
    
    UFUNCTION(BlueprintPure)
    float GetAutomaticBlinkDelay(int32 chainBlinkCount) const;
    
    UBlinkerComponent();
};

