#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Winter2021PlayerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UWinter2021PlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    bool _hasCosmeticUnlockRequirementBeenSatisfied;
    
    UPROPERTY(Replicated, Transient)
    bool _hasSentUnlockCosmeticRequest;
    
    UPROPERTY(Replicated, Transient)
    bool _hasAllCosmeticRewards;
    
public:
    UWinter2021PlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Client, Reliable)
    void Client_UnlockCosmetic();
    
};

