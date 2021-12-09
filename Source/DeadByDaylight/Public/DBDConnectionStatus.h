#pragma once
#include "CoreMinimal.h"
#include "DBDConnectionStatus.generated.h"

class UDBDGameInstance;

USTRUCT()
struct FDBDConnectionStatus {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
public:
    DEADBYDAYLIGHT_API FDBDConnectionStatus();
};

