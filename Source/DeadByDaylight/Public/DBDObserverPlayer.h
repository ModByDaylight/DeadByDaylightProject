#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DBDObserverPlayer.generated.h"

class UDBDPlayerData;

UCLASS()
class ADBDObserverPlayer : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDBDPlayerData* _playerData;
    
public:
    ADBDObserverPlayer();
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_PlayerReady();
    
};

