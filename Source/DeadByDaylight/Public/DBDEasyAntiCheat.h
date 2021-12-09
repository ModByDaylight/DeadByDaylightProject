#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDEasyAntiCheat.generated.h"

class UDBDGameInstance;

UCLASS()
class UDBDEasyAntiCheat : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
    UPROPERTY(Transient)
    bool _connectedToServer;
    
public:
    UDBDEasyAntiCheat();
};

