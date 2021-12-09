#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "FootstepsPerceptionComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UFootstepsPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> _allowFootstepsSeenPerkFlags;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> _disallowFootstepsSeenPerkFlags;
    
public:
    UFootstepsPerceptionComponent();
};

