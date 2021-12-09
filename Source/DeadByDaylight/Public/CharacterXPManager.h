#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterXPManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UCharacterXPManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDBDGameInstance> _gameInstance;
    
public:
    UCharacterXPManager();
};

