#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "ZombiesInterestEventManager.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombiesInterestEventManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _zombieInterestEvents;
    
public:
    UZombiesInterestEventManager();
private:
    UFUNCTION()
    void Authority_OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction);
    
};

