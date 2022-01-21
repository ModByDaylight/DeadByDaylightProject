#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "BiteTheBullet.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBiteTheBullet : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDPlayer* _server_healTarget;
    
public:
    UBiteTheBullet();
};

