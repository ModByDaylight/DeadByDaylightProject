#pragma once
#include "CoreMinimal.h"
#include "BlindFlashlightableLightingStrategy.h"
#include "SisterBlindFlashlightableLightingStrategy.generated.h"

class AConjoinedTwin;

UCLASS(EditInlineNew)
class USisterBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
public:
    USisterBlindFlashlightableLightingStrategy();
};

