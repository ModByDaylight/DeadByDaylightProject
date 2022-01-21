#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LamentConfigurationPlayerPossessionData.h"
#include "LamentConfigurationPlayerAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULamentConfigurationPlayerAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_AnalyticsCount)
    int32 _analyticsCount;
    
    UPROPERTY(Replicated)
    FLamentConfigurationPlayerPossessionData _possessionAnalytics;
    
public:
    ULamentConfigurationPlayerAnalyticsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_AnalyticsCount();
    
};

