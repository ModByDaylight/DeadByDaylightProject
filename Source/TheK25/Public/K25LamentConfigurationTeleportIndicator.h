#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K25LamentConfigurationTeleportIndicator.generated.h"

UCLASS()
class AK25LamentConfigurationTeleportIndicator : public AActor {
    GENERATED_BODY()
public:
    AK25LamentConfigurationTeleportIndicator();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_UpdateIndicatorVisibility(bool isVisible);
    
};

