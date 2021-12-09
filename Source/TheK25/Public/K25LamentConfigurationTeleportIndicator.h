#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K25LamentConfigurationTeleportIndicator.generated.h"

UCLASS()
class AK25LamentConfigurationTeleportIndicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_UpdateIndicatorVisibility(bool isVisible);
    
public:
    AK25LamentConfigurationTeleportIndicator();
};

