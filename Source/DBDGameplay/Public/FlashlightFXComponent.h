#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AkObservedPlayerSoundLoop.h"
#include "FlashlightFXComponent.generated.h"

class UFlashlightTargetFXComponent;
class ADBDPlayer;
class USceneComponent;
class UCurveFloat;
class UStaticMeshComponent;
class USplineMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFlashEvent);
    
    UPROPERTY(BlueprintAssignable)
    FOnFlashEvent OnFlashEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* _tip;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UStaticMeshComponent* _centerGlowMesh;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USplineMeshComponent* _beamMesh;
    
    UPROPERTY(EditAnywhere)
    float _minimumOcclusionDistanceForSpotlight;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _flashEffectIntensityCurve;
    
    UPROPERTY(EditAnywhere)
    float _flashEffectDuration;
    
    UPROPERTY(EditAnywhere)
    float _spotLightHalfAngle;
    
    UPROPERTY(EditAnywhere)
    float _spotLightIntensity;
    
    UPROPERTY(EditAnywhere)
    float _visualReworkSpotLightIntensity;
    
    UPROPERTY(EditAnywhere)
    float _beamBlindingHalfAngle;
    
    UPROPERTY(EditAnywhere)
    float _beamFlashHalfAngle;
    
    UPROPERTY(EditAnywhere)
    float _beamBlindingRatioInterpSpeedWithTarget;
    
    UPROPERTY(EditAnywhere)
    float _beamBlindingRatioInterpSpeedWithoutTarget;
    
    UPROPERTY(EditAnywhere)
    bool _resizeConeLength;
    
    UPROPERTY(EditAnywhere)
    float _centerGlowWidthScaleWithoutBlindTarget;
    
    UPROPERTY(EditAnywhere)
    float _centerGlowWidthScaleWithBlindTarget;
    
    UPROPERTY(EditAnywhere)
    float _centerGlowWidthScaleDuringFlash;
    
    UPROPERTY(EditAnywhere)
    float _centerGlowShrinkDistance;
    
    UPROPERTY(EditAnywhere)
    float _centerGlowLengthMaxScale;
    
    UPROPERTY(EditAnywhere)
    FAkObservedPlayerSoundLoop _aimedAtSoundLoop;
    
private:
    UPROPERTY(Export, Transient)
    UFlashlightTargetFXComponent* _currentBeamModifyingTarget;
    
    UPROPERTY(Export, Transient)
    TSet<UFlashlightTargetFXComponent*> _targets;
    
public:
    UFlashlightFXComponent();
private:
    UFUNCTION()
    void UpdateFXTargets();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateConeEvent(float length, float halfAngle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostUpdateEvent();
    
private:
    UFUNCTION()
    void OnTurnedOn();
    
    UFUNCTION()
    void OnTurnedOff();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroppedEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCollectorLocallyObservedChangedEvent(bool isLocallyObserved);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCollectedEvent(ADBDPlayer* collector);
    
public:
    UFUNCTION(BlueprintPure)
    float GetBlindingSuccessRatio() const;
    
};

