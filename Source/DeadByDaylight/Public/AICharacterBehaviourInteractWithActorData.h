#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AICharacterBehaviourInteractWithActorData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UAICharacterBehaviourInteractWithActorData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* TargetActor;
    
    UPROPERTY(Transient)
    ECharacterMovementTypes CharacterMovementType;
    
    UPROPERTY(Transient)
    bool UsePathfinding;
    
    UAICharacterBehaviourInteractWithActorData();
    UFUNCTION(BlueprintCallable)
    void WatchGameEventTypes(TArray<FGameplayTag> gameEventTypes);
    
    UFUNCTION(BlueprintCallable)
    void WatchGameEventType(FGameplayTag gameEventType);
    
    UFUNCTION(BlueprintCallable)
    void Init(AActor* actor, ECharacterMovementTypes NewCharacterMovementType, bool NewUsePathfinding);
    
};

