#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "SurvivorCollectableOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorCollectableOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _outlineColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _nearlyConsumedColor;
    
public:
    USurvivorCollectableOutlineUpdateStrategy();
};

