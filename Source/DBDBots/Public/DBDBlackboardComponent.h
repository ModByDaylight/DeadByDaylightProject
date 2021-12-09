#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIDisplayDebugInterface.h"
#include "MindFocusObjectEntry.h"
#include "GameplayTagContainer.h"
#include "WeightedWishedObjectMapContainer.h"
#include "UObject/NoExportTypes.h"
#include "DBDBlackboardComponent.generated.h"

class UObject;

UCLASS()
class DBDBOTS_API UDBDBlackboardComponent : public UBlackboardComponent, public IAIDisplayDebugInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<UObject*, FMindFocusObjectEntry> _mindFocusEntries;
    
    UPROPERTY(Transient)
    TMap<FGameplayTag, FVector> _pinLocations;
    
    UPROPERTY(Transient)
    TMap<FGameplayTag, UObject*> _pinObjects;
    
    UPROPERTY(Transient)
    TMap<UObject*, float> _lostMindFocusEntries;
    
    UPROPERTY(Transient)
    TMap<FGameplayTag, FWeightedWishedObjectMapContainer> _objectWishListMap;
    
    UPROPERTY(Transient)
    TSet<UObject*> _discoveredObjects;
    
    UPROPERTY(Transient)
    TSet<UObject*> _intentionValidators;
    
public:
    UDBDBlackboardComponent();
};

