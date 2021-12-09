#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GassedSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UGassedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isGassed;
    
public:
    UGassedSurvivorSubAnimInstance();
};

