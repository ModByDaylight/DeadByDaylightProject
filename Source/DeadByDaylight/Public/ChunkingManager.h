#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChunkingManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UChunkingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
public:
    UChunkingManager();
};

