#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlagueSurvivorAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPlagueSurvivorAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    uint32 _replicatedRegularVomitHits;
    
public:
    UPlagueSurvivorAnalyticsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

