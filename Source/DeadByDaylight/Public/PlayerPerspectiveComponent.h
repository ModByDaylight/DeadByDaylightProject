#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPerspectiveComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerPerspectiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerPerspectiveComponent();
private:
    UFUNCTION()
    void UpdateLocallyObserved();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocallyObserved() const;
    
};

