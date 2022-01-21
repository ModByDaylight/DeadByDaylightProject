#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K24PounceAttack.generated.h"

class AZombieCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK24PounceAttack : public UPounceAttack {
    GENERATED_BODY()
public:
    UK24PounceAttack();
private:
    UFUNCTION(Reliable, Server)
    void Server_HitZombie(AZombieCharacter* zombie, const float targetLocationTimestamp);
    
};

