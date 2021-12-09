#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FadeComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFadeComponentOnFadePercentChanged, float, fadePercent);

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UFadeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFadeComponentOnFadePercentChanged OnFadePercentChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float _fadeDuration;
    
public:
    UFUNCTION(BlueprintPure)
    float GetFadePercent() const;
    
    UFadeComponent();
};

