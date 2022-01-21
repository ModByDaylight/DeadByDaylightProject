#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlantaPartyFlowHandler.generated.h"

UCLASS()
class UAtlantaPartyFlowHandler : public UObject {
    GENERATED_BODY()
public:
    UAtlantaPartyFlowHandler();
private:
    UFUNCTION()
    void DisplayPartyFlowHandlerInfo();
    
};

