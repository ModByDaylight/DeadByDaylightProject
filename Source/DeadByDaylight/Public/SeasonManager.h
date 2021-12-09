#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SeasonManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API ASeasonManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
public:
    ASeasonManager();
};

