#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessNegationEffectComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPossessNegationEffectComponentPlayCantPossessSound);

UCLASS()
class UPossessNegationEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPossessNegationEffectComponentPlayCantPossessSound PlayCantPossessSound;
    
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UPossessNegationEffectComponent();
};

