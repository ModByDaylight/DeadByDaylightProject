#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIDisplayDebugInterface.h"
#include "PathStrategySelector.generated.h"

class ADBDAIBTController;
class UPathStrategy;

UCLASS(Abstract)
class DBDBOTS_API UPathStrategySelector : public UObject, public IAIDisplayDebugInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ADBDAIBTController* _aiOwner;
    
    UPROPERTY(Transient)
    TArray<UPathStrategy*> _activePathStrategies;
    
    UPROPERTY(Transient)
    TArray<UPathStrategy*> _nextPathStrategies;
    
public:
    UPathStrategySelector();
    
    // Fix for true pure virtual functions not being implemented
};

