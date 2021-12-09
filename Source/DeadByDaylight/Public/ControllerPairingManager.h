#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ControllerPairingManager.generated.h"

class UDBDGameInstance;

UCLASS()
class UControllerPairingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
public:
    UControllerPairingManager();
};

