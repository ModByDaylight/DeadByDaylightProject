#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NetSynchedClock.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class NETWORKUTILITIES_API UNetSynchedClock : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _serverTimeUpdateDelay;
    
public:
    UNetSynchedClock();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestServerTime();
    
    UFUNCTION(Client, Reliable)
    void Client_ReportServerTime(float serverTime);
    
};

