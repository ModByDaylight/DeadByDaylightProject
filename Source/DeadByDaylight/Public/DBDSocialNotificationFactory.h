#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDSocialNotificationFactory.generated.h"

class UDBDGameInstance;
class UToastManager;
class UDBDPartyFacade;
class UFriendManager;
class UDataTable;

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

