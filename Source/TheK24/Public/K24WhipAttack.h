#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K24WhipAttack.generated.h"

class ACamperPlayer;
class ADBDPlayer;

UCLASS()
class THEK24_API UK24WhipAttack : public UPounceAttack {
    GENERATED_BODY()
public:
    UFUNCTION(Reliable, Server)
    void Server_ContaminatePlayer(ACamperPlayer* target, const float targetLocationTimestamp);
    
    UFUNCTION(Client, Reliable)
    void Client_ContaminationResult(ADBDPlayer* target, bool isValid);
    
    UK24WhipAttack();
};

