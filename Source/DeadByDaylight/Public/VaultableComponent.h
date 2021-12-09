#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "VaultableComponent.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVaultableComponentOnVault, ADBDPlayer*, vaulter);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UVaultableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FVaultableComponentOnVault OnVault;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag _vaultableScoreEvent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SignalVault(ADBDPlayer* survivor, float interactionTime);
    
private:
    UFUNCTION()
    void OnChaseEnded(ADBDPlayer* survivor, float chaseTimer);
    
public:
    UVaultableComponent();
};

