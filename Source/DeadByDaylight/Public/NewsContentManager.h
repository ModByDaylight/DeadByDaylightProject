#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NewsContentManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UNewsContentManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
public:
    UNewsContentManager();
};

