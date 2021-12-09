#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "SurvivorAimableSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API USurvivorAimableSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float _pitch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isHoldingAimItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isAiming;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _isAimingAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector _aimPoint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _shoulderToCollisionDistance;
    
public:
    USurvivorAimableSubAnimInstance();
};

