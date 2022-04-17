#pragma once
#include "CoreMinimal.h"
#include "OnFadePercentChangedDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "FadeComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFadeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnFadePercentChangedDelegate OnFadePercentChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float _fadeDuration;
    
public:
    UFadeComponent();
    UFUNCTION(BlueprintPure)
    float GetFadePercent() const;
    
};

