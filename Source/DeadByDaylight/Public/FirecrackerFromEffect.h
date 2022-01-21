#pragma once
#include "CoreMinimal.h"
#include "Firecracker.h"
#include "FirecrackerFromEffect.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API AFirecrackerFromEffect : public AFirecracker {
    GENERATED_BODY()
public:
    AFirecrackerFromEffect();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_InitFromEffect(ADBDPlayer* player, AGenerator* trapedGenerator);
    
};

