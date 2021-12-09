#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "ContaminationSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UContaminationSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isContaminated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInjectingSerumSelf;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInjectingSerumOther;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isBeingInjectedWithSerum;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isBeingHealed;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _isFirstContaminationHit;
    
public:
    UContaminationSubAnimInstance();
};

