#pragma once
#include "CoreMinimal.h"
#include "InteractionRequest.generated.h"

class UInteractionDefinition;
class ADBDPlayer;

USTRUCT()
struct DEADBYDAYLIGHT_API FInteractionRequest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _interaction;
    
    UPROPERTY(Transient)
    ADBDPlayer* _requester;
    
public:
    FInteractionRequest();
};

