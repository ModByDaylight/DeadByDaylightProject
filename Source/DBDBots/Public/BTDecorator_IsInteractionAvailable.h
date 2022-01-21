#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "EIsInteractionAvailableOnFilter.h"
#include "BTDecorator_IsInteractionAvailable.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsInteractionAvailable : public UBTDecorator_TickableBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<FString> InteractionIds;
    
    UPROPERTY(EditInstanceOnly)
    EIsInteractionAvailableOnFilter OnFilter;
    
    UPROPERTY(EditInstanceOnly)
    bool FailIfAnotherOngoingInteraction;
    
    UPROPERTY(EditInstanceOnly)
    bool FailIfNotPerformingInteraction;
    
    UBTDecorator_IsInteractionAvailable();
};

