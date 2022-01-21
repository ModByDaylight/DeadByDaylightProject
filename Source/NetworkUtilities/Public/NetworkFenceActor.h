#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "NetworkFenceActor.generated.h"

UCLASS()
class NETWORKUTILITIES_API ANetworkFenceActor : public AActor {
    GENERATED_BODY()
public:
    ANetworkFenceActor();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ClientPassedFence(const TArray<FGuid>& Fences);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_AllPassedFence(const TArray<FGuid>& Fences);
    
};

