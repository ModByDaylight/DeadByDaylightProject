#pragma once
#include "CoreMinimal.h"
#include "BlindableBaseComponent.h"
#include "ZombieBlindableComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieBlindableComponent : public UBlindableBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UGameplayTagContainerComponent* _ownerObjectState;
    
public:
    UZombieBlindableComponent();
};

