#pragma once
#include "CoreMinimal.h"
#include "BaseKillerAnimInstance.h"
#include "TagStateBool.h"
#include "KillerLocomotionSubAnimInstance.generated.h"

class UAnimSequence;
class UBlendSpace1D;

UCLASS(NonTransient)
class DBDANIMATION_API UKillerLocomotionSubAnimInstance : public UBaseKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _landLightTPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _landLightFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace1D* _BSLandTPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace1D* _BSLandFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _walkToFallTPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _walkToFallFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _carryIdleTPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _carryIdleFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _fallingTPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _fallingFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isFirstPersonView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _landLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace1D* _BSLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _walkToFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _carryIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _falling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isVaultingToFall;
    
private:
    UPROPERTY(Transient)
    FTagStateBool _isVaultingToFallState;
    
public:
    UKillerLocomotionSubAnimInstance();
};

