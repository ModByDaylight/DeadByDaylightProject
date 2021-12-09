#pragma once
#include "CoreMinimal.h"
#include "PossessNegationEffectComponent.h"
#include "KillerPossessNegationEffectComponent.generated.h"

class AConjoinedTwin;

UCLASS()
class UKillerPossessNegationEffectComponent : public UPossessNegationEffectComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
public:
    UKillerPossessNegationEffectComponent();
};

