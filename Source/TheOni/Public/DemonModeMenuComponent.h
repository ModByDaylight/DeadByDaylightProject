#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DemonModeMenuComponent.generated.h"

UCLASS(BlueprintType)
class UDemonModeMenuComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetInMenuDemonMode(const bool inMenuDemonMode);
    
    UDemonModeMenuComponent();
};

