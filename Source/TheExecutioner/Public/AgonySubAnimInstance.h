#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "AgonySubAnimInstance.generated.h"

UCLASS(NonTransient)
class UAgonySubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInAgony;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInTormentTrail;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInTormentTrailEffect;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInDeathBed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isDeadInDeathBed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInStruggleInDeathBed;
    
public:
    UAgonySubAnimInstance();
};

