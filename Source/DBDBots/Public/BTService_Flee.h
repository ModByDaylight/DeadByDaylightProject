#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTService.h"
#include "AIDisplayDebugInterface.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AITunableParameter.h"
#include "BTService_Flee.generated.h"

class UPathStrategySelector;
class UObject;
class UNavMovePath;

UCLASS()
class DBDBOTS_API UBTService_Flee : public UBTService, public IAIDisplayDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFleePath;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBShouldFallPallet;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<UPathStrategySelector> PathStrategySelectorClass;
    
    UPROPERTY(EditInstanceOnly)
    float OnEndObjectInFocusCooldown;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter ShouldFallPalletUnderHostileRange;
    
    UPROPERTY(EditInstanceOnly)
    float ClearFleePathBBKeyDelay;
    
private:
    UPROPERTY(Transient)
    UNavMovePath* _activePath;
    
    UPROPERTY(Transient)
    TArray<UObject*> _lostFocusedObjects;
    
    UPROPERTY(Transient)
    UPathStrategySelector* _strategySelector;
    
public:
    UBTService_Flee();
    
    // Fix for true pure virtual functions not being implemented
};

