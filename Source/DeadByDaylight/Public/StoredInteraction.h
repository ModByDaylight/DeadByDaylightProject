#pragma once
#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "InteractionPlayerProperties.h"
#include "StoredInteraction.generated.h"

class UInteractionDefinition;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FStoredInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UInteractionDefinition> _interaction;
    
    UPROPERTY(Transient)
    EInputInteractionType _inputType;
    
    UPROPERTY(Transient)
    FInteractionPlayerProperties _playerProperties;
    
public:
    FStoredInteraction();
};

