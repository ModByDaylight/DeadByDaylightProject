#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EArmIkMode.h"
#include "ArmIKSurvivorSubAnimInstance.generated.h"

class UArmDetectionFanComponent;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UArmIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FRotator _rightWristUpRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator _leftWristUpRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatRange _localWristYawRange;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatRange _localWristPitchRange;
    
    UPROPERTY(EditDefaultsOnly)
    float _armInterpolationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float _handInterpolationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float _alphaLerpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _reachPadding;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _rightArmIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _leftArmIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EArmIkMode _armIkMode;
    
private:
    UPROPERTY(Export)
    UArmDetectionFanComponent* _rightDetectionFan;
    
    UPROPERTY(Export)
    UArmDetectionFanComponent* _leftDetectionFan;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* _meshComponent;
    
public:
    UArmIKSurvivorSubAnimInstance();
    UFUNCTION(BlueprintCallable)
    void ChangeMode(const EArmIkMode newMode);
    
};

