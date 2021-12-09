#pragma once
#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDGame_Start.generated.h"

class UClientStartupInitializerInterface;
class IClientStartupInitializerInterface;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDGame_Start : public ADBDBaseGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<IClientStartupInitializerInterface> _startupInitializer;
    
public:
    ADBDGame_Start();
};

