#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisplayStandCurrencyRequesterComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDisplayStandCurrencyRequesterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    UClass* _menuCurrencyDisplayableClass;
    
public:
    UDisplayStandCurrencyRequesterComponent();
};

