#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "TwinOutlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _visibleColorForKiller;
    
public:
    UTwinOutlineUpdateStrategy();
};

