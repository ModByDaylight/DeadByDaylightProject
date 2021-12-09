#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "FaceCorrectionSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UFaceCorrectionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isIdle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isFreddyMori;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInCloset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isEdgeCase;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInjured;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isHealingOthers;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isCrouched;
    
public:
    UFaceCorrectionSurvivorSubAnimInstance();
};

