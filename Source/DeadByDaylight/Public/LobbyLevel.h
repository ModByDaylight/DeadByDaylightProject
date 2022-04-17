#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "EWorldFlowEvent.h"
#include "LobbyLevel.generated.h"

class ADisplayStand;

UCLASS()
class DEADBYDAYLIGHT_API ALobbyLevel : public ALevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ADisplayStand*> _registeredDisplayStands;
    
    UPROPERTY(EditAnywhere)
    EWorldFlowEvent LobbyLoadedEvent;
    
public:
    ALobbyLevel();
private:
    UFUNCTION()
    void OnShopSubLevelLoaded();
    
    UFUNCTION()
    void OnLobbySubLevelLoaded();
    
};

