#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlantaPartyFlowUtilities.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAtlantaPartyFlowUtilities : public UObject {
    GENERATED_BODY()
public:
    UAtlantaPartyFlowUtilities();
    UFUNCTION(BlueprintCallable)
    static bool IsCurrentPlayerInParty();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCurrentPlayerAloneInParty();
    
};

