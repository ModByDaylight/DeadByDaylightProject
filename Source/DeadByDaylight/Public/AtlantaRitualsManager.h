#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlantaRitualsManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaRitualsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
public:
    UAtlantaRitualsManager();
};

