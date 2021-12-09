#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInGameAssetPreloadState.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPlayerInGameAssetPreloadState : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION(Reliable, Server)
    void Server_SetPreloadCompleted();
    
public:
    UPlayerInGameAssetPreloadState();
};

