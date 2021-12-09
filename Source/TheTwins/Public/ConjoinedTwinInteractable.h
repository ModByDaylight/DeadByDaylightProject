#pragma once
#include "CoreMinimal.h"
#include "PlayerInteractable.h"
#include "ConjoinedTwinInteractable.generated.h"

class UChargeableComponent;

UCLASS()
class AConjoinedTwinInteractable : public APlayerInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UChargeableComponent* _possessKillerChargeable;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UChargeableComponent* _chargeTwinJumpChargeable;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UChargeableComponent* _removeTwinChargeable;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UChargeableComponent* _destroyTwinChargeable;
    
public:
    AConjoinedTwinInteractable();
};

