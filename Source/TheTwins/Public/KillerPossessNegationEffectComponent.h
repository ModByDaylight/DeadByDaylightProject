#pragma once
#include "CoreMinimal.h"
#include "PossessNegationEffectComponent.h"
#include "KillerPossessNegationEffectComponent.generated.h"

class AConjoinedTwin;

UCLASS(meta=(BlueprintSpawnableComponent))
class UKillerPossessNegationEffectComponent : public UPossessNegationEffectComponent {
    GENERATED_BODY()
public:
    UKillerPossessNegationEffectComponent();
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
};

