#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LobbyControllerSubsystem.generated.h"

class ULobbyDisplayStandController;

UCLASS()
class DEADBYDAYLIGHT_API ULobbyControllerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<ULobbyDisplayStandController> _localPlayerDisplayStandController;
    
    UPROPERTY()
    TMap<FString, ULobbyDisplayStandController*> _displayStandControllers;
    
public:
    ULobbyControllerSubsystem();
};

