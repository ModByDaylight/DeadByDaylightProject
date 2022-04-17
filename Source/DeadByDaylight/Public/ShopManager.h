#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ShopManager.generated.h"

class UDBDGameInstance;
class UBannerDataProcessor;
class URecommendationsGenerator;

UCLASS()
class DEADBYDAYLIGHT_API UShopManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
    UPROPERTY(Transient)
    UBannerDataProcessor* _bannerDataProcessor;
    
    UPROPERTY(Transient)
    URecommendationsGenerator* _recommendationsGenerator;
    
public:
    UShopManager();
};

