#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CharmIdSlot.h"
#include "DisplayStandMeatHookRequesterComponent.generated.h"

class AMenuMeatHook;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandMeatHookRequesterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<AMenuMeatHook> _meatHookClass;
    
public:
    UDisplayStandMeatHookRequesterComponent();
private:
    UFUNCTION()
    void OnMeatHookDisplayed(AActor* actor, TArray<FCharmIdSlot> charmIDs);
    
};

