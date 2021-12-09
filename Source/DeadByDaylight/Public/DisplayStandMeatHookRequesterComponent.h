#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharmIdSlot.h"
#include "Components/ActorComponent.h"
#include "DisplayStandMeatHookRequesterComponent.generated.h"

class AMenuMeatHook;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UDisplayStandMeatHookRequesterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<AMenuMeatHook> _meatHookClass;
    
    UFUNCTION()
    void OnMeatHookDisplayed(AActor* actor, TArray<FCharmIdSlot> charmIDs);
    
public:
    UDisplayStandMeatHookRequesterComponent();
};

