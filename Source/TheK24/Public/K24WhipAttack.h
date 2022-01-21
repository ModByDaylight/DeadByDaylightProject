#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K24WhipAttack.generated.h"

class ACamperPlayer;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK24_API UK24WhipAttack : public UPounceAttack {
    GENERATED_BODY()
public:
    UK24WhipAttack();
    UFUNCTION(Reliable, Server)
    void Server_ContaminatePlayer(ACamperPlayer* target, const float targetLocationTimestamp);
    
    UFUNCTION(Client, Reliable)
    void Client_ContaminationResult(ADBDPlayer* target, bool isValid);
    
};

