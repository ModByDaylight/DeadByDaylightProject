#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TheTwinsCheatComponent.generated.h"

class UTwinPossessionComponent;

UCLASS()
class UTheTwinsCheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TrySendThePlayerBackInKiller(UTwinPossessionComponent* twinPossessionComponent);
    
public:
    UFUNCTION(Exec)
    void DBD_TwinDestroyTheTwin();
    
    UTheTwinsCheatComponent();
};

