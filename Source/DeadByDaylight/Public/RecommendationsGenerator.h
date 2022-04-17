#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RecommendationsGenerator.generated.h"

class UShopManager;
class UDBDGameInstance;
class URecommendationsFilter;

UCLASS()
class URecommendationsGenerator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UShopManager> _shopManager;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
    UPROPERTY(Transient)
    TMap<FString, URecommendationsFilter*> _filters;
    
public:
    URecommendationsGenerator();
};

