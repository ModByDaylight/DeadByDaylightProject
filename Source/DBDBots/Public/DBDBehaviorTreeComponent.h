#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIDisplayDebugInterface.h"
#include "RelevantNodeMemory.h"
#include "DBDBehaviorTreeComponent.generated.h"

class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDBehaviorTreeComponent : public UBehaviorTreeComponent, public IAIDisplayDebugInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<UClass*, FRelevantNodeMemory> _lastRelevantNodeMemories;
    
    UPROPERTY(Transient)
    TArray<UObject*> _createdObjects;
    
public:
    UDBDBehaviorTreeComponent();
    
    // Fix for true pure virtual functions not being implemented
};

