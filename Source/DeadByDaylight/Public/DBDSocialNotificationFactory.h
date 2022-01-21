#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDSocialNotificationFactory.generated.h"

class UFriendManager;
class UDBDPartyFacade;
class UDBDGameInstance;
class UDataTable;
class UToastManager;

UCLASS()
class UDBDSocialNotificationFactory : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
    UPROPERTY(Transient)
    UToastManager* _toastMgr;
    
    UPROPERTY(Transient)
    UDBDPartyFacade* _partyFacade;
    
    UPROPERTY(Transient)
    UFriendManager* _friendManager;
    
    UPROPERTY(Transient)
    UDataTable* _toastTable;
    
public:
    UDBDSocialNotificationFactory();
};

