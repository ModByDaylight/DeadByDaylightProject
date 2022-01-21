#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "ZombieOutlineUpdateStrategy.generated.h"

class AZombieCharacter;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UZombieOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AZombieCharacter* _zombieCharacter;
    
public:
    UZombieOutlineUpdateStrategy();
};

