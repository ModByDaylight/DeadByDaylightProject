#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterProgressionManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UCharacterProgressionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
public:
    UCharacterProgressionManager();
};

