#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ViewRotationStrategy.h"
#include "BaseCameraTargetingStrategy.generated.h"

class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UBaseCameraTargetingStrategy : public UObject, public IViewRotationStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _maxFreeAngle;
    
    UPROPERTY(EditAnywhere)
    float _maxInputRotation;
    
    UPROPERTY(EditAnywhere)
    float _interpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    float _interpolationSpeedOutsideFreeMoveZone;
    
    UPROPERTY(Transient)
    AActor* _target;
    
public:
    UBaseCameraTargetingStrategy();
    
    // Fix for true pure virtual functions not being implemented
};

