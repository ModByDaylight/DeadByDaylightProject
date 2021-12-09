#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "BreathingSurvivorSubAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class DBDANIMATION_API UBreathingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isDead;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* _breathing;
    
public:
    UBreathingSurvivorSubAnimInstance();
};

