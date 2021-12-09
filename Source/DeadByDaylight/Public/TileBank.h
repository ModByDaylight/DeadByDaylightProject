#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TileBank.generated.h"

class ATile;

UCLASS()
class UTileBank : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ATile*> _allTileBlueprints;
    
public:
    UTileBank();
};

