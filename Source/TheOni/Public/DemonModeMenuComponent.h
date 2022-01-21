#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DemonModeMenuComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UDemonModeMenuComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDemonModeMenuComponent();
    UFUNCTION(BlueprintCallable)
    void SetInMenuDemonMode(const bool inMenuDemonMode);
    
};

