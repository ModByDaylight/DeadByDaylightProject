#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlagueSurvivorAnalyticsComponent.generated.h"

UCLASS()
class UPlagueSurvivorAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    uint32 _replicatedRegularVomitHits;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlagueSurvivorAnalyticsComponent();
};

