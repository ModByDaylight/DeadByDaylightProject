#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Tormentor.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UTormentor : public UInterface {
    GENERATED_BODY()
};

class ITormentor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetTormentTrailSpawnPoint();
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetTormentTrailAttackSpawnPoint();
    
};

