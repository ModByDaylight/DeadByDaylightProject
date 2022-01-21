#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineSystemHandler.generated.h"

class UDBDGameInstance;
class ULocalPlayer;
class UGameSessionDS;
class UDBDServerInstance;
class UCrossPlatformManager;

UCLASS(Transient)
class DEADBYDAYLIGHT_API UOnlineSystemHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ULocalPlayer* _cachedLocalPlayer;
    
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
    UPROPERTY(Transient)
    UGameSessionDS* _gameSessionDS;
    
    UPROPERTY(Transient)
    UDBDServerInstance* _serverInstance;
    
    UPROPERTY(Transient)
    UCrossPlatformManager* _crossPlatformManager;
    
public:
    UOnlineSystemHandler();
};

