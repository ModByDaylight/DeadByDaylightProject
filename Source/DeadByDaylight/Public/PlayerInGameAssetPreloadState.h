#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInGameAssetPreloadState.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerInGameAssetPreloadState : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerInGameAssetPreloadState();
private:
    UFUNCTION(Reliable, Server)
    void Server_SetPreloadCompleted();
    
};

