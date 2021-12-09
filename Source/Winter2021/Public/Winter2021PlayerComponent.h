#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Winter2021PlayerComponent.generated.h"

UCLASS()
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
    
    UFUNCTION(Client, Reliable)
    void Client_UnlockCosmetic();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UWinter2021PlayerComponent();
};

