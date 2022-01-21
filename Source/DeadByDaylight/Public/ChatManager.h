#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChatManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API AChatManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
public:
    AChatManager();
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DisplayMessage(const FString& chatIdentifier, int32 playerIndex, const FString& playerName, const FString& mirrorsId, const FString& msg);
    
};

