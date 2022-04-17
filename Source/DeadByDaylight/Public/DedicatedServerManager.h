#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DedicatedServerManager.generated.h"

class UDedicatedServerStartupInitializerInterface;
class IDedicatedServerStartupInitializerInterface;
class UDBDGameInstance;
class UOnlineSystemHandler;

UCLASS()
class DEADBYDAYLIGHT_API UDedicatedServerManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<IDedicatedServerStartupInitializerInterface> _startupInitializer;
    
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
    UPROPERTY(Transient)
    UOnlineSystemHandler* _onlineSystemHandler;
    
public:
    UDedicatedServerManager();
};

