#pragma once
#include "CoreMinimal.h"
#include "PendingInstantActionList.h"
#include "Components/ActorComponent.h"
#include "ActionPredictionKey.h"
#include "InstantActionList.h"
#include "ReversibleActionSystemComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class REVERSIBLEACTIONSYSTEM_API UReversibleActionSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FActionPredictionKey, FPendingInstantActionList> _pendingInstantActionHandlers;
    
    UPROPERTY(Transient)
    TMap<FActionPredictionKey, FInstantActionList> _predictedInstantActionHandlers;
    
public:
    UReversibleActionSystemComponent();
};

