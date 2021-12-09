#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K25PounceAttack.generated.h"

UCLASS()
class UK25PounceAttack : public UPounceAttack {
    GENERATED_BODY()
public:
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DownedTargetHoldingLamentConfiguration();
    
    UFUNCTION(Client, Reliable)
    void Client_InvalidateDownedTargetHoldingLamentConfiguration();
    
public:
    UK25PounceAttack();
};

