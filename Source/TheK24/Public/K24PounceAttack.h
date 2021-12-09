#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K24PounceAttack.generated.h"

class AZombieCharacter;

UCLASS()
class UK24PounceAttack : public UPounceAttack {
    GENERATED_BODY()
public:
private:
    UFUNCTION(Reliable, Server)
    void Server_HitZombie(AZombieCharacter* zombie, const float targetLocationTimestamp);
    
public:
    UK24PounceAttack();
};

