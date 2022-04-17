#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LegIKSurvivorSubAnimInstance.generated.h"

class ULocomotionPredictor;
class UBaseGroundDetectorComponent;
class UAnimCollection;

UCLASS(NonTransient)
class DBDANIMATION_API ULegIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector _leftFootOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector _rightFootOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector _pelvisOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isIdle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isCrouched;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator _rightFootDeltaRotator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator _leftFootDeltaRotator;
    
private:
    UPROPERTY(EditAnywhere)
    UAnimCollection* AnimCollection;
    
    UPROPERTY(EditAnywhere)
    FName _floorJoint;
    
    UPROPERTY(EditAnywhere)
    float _pelvisOffsetTreshold;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _pelvisOffsetRange;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _pelvisOffsetRangeCrouched;
    
    UPROPERTY(EditAnywhere)
    float _pelvisOffsetInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _footOffsetRange;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _footOffsetRangeCrouched;
    
    UPROPERTY(EditAnywhere)
    float _footOffsetInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    FFloatRange _footPitchDeltaRange;
    
    UPROPERTY(Export, Transient)
    UBaseGroundDetectorComponent* _leftFootGroundDetector;
    
    UPROPERTY(Export, Transient)
    UBaseGroundDetectorComponent* _rightFootGroundDetector;
    
    UPROPERTY(EditAnywhere)
    float maxLocalHeightForPlanting;
    
    UPROPERTY(Transient)
    ULocomotionPredictor* _locomotionPredictor;
    
public:
    ULegIKSurvivorSubAnimInstance();
};

