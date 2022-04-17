#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnVaultEventDelegate.h"
#include "GameplayTagContainer.h"
#include "VaultableComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVaultableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnVaultEvent OnVault;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag _vaultableScoreEvent;
    
public:
    UVaultableComponent();
    UFUNCTION(BlueprintCallable)
    void SignalVault(ADBDPlayer* survivor, float interactionTime);
    
private:
    UFUNCTION()
    void OnChaseEnded(ADBDPlayer* survivor, float chaseTimer);
    
};

