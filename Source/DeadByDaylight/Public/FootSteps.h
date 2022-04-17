#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BHVRPerDetailModeInt -FallbackName=BHVRPerDetailModeInt
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BHVRPerDetailModeFloat -FallbackName=BHVRPerDetailModeFloat
#include "FootStep.h"
#include "UObject/NoExportTypes.h"
#include "FootSteps.generated.h"

class UDBDDecalComponent;
class UMaterial;
class UCurveFloat;
class UDecalSpawner;

UCLASS()
class AFootSteps : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _raycastHalfAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float _raycastZOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float _raycastDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterial* _material;
    
    UPROPERTY(EditDefaultsOnly)
    float _minimumDecalSize;
    
    UPROPERTY(EditDefaultsOnly)
    float _maximumDecalSize;
    
    UPROPERTY(EditDefaultsOnly)
    float _projectionTickness;
    
    UPROPERTY(EditDefaultsOnly)
    float _visibilityMultiplierInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _fadeCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _veinsCurve;
    
    //UPROPERTY(EditDefaultsOnly)
    //FBHVRPerDetailModeInt _decalPoolSize;
    
    //UPROPERTY(EditDefaultsOnly)
    //FBHVRPerDetailModeFloat _recycleThresholdPercentage;
    
    //UPROPERTY(EditDefaultsOnly)
    //FBHVRPerDetailModeFloat _recycleDistancePercentage;
    
    //UPROPERTY(EditDefaultsOnly)
    //FBHVRPerDetailModeInt _maxOverlapping;
    
    UPROPERTY(Transient)
    TMap<UDBDDecalComponent*, FFootStep> _footSteps;
    
    UPROPERTY(Transient)
    UDecalSpawner* _decalSpawner;
    
public:
    AFootSteps();
private:
    UFUNCTION()
    void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction);
    
};

