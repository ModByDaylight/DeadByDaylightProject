#pragma once
#include "CoreMinimal.h"
#include "PathStrategySelector.h"
#include "EAIFleePathStrategy.h"
#include "PathStrategySelector_Flee.generated.h"

class UPathStrategy;

UCLASS(Abstract)
class DBDBOTS_API UPathStrategySelector_Flee : public UPathStrategySelector {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, Export)
    TMap<EAIFleePathStrategy, UPathStrategy*> FleePathStrategies;
    
private:
    UPROPERTY(Transient)
    TMap<EAIFleePathStrategy, UPathStrategy*> _activeFleePathStrategiesMap;
    
public:
    UPathStrategySelector_Flee();
};

