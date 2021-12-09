#pragma once
#include "CoreMinimal.h"
#include "FearMarketOfferingInstance.h"
#include "UObject/Object.h"
#include "FearMarketItemInstance.h"
#include "FearMarketManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UFearMarketManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFearMarketItemInstance PendingPurchaseFearMarketItem;
    
private:
    UPROPERTY()
    FFearMarketOfferingInstance _existingFearMarket;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
    UFUNCTION()
    void ReceivedFearMarketData(bool success);
    
public:
    UFearMarketManager();
};

