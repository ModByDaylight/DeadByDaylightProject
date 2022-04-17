#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SkillCheckDefinition.h"
#include "ESkillCheckCustomType.h"
#include "SkillCheckResponse.h"
#include "SkillCheck.generated.h"

class ADBDPlayer;
class UChargeableInteractionDefinition;
class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USkillCheck : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDPlayer* _owner;
    
    UPROPERTY(Export, Transient)
    UChargeableInteractionDefinition* _currentInteraction;
    
public:
    USkillCheck();
    UFUNCTION(BlueprintCallable)
    bool ShouldShowWarning();
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnSkillCheckSuccess(FSkillCheckResponse skillCheckResponse);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnSkillCheckFailure(FSkillCheckResponse skillCheckResponse);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DeactivateSkillCheck();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ActivateSkillCheck(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSkillCheckInput();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SkillCheckResponse(FSkillCheckResponse skillCheckResponse);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnTriggerSkillCheck(UChargeableInteractionDefinition* currentInteraction, ESkillCheckCustomType skillCheckCustomType, const FString& id, const FString& salt);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DeactivateSkillCheck();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ActivateSkillCheck(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition);
    
    UFUNCTION()
    void Local_OnSkillCheckSuccessTrigger(const bool bonus, const bool insane, ESkillCheckCustomType type, const bool failedCountedAsGood);
    
public:
    UFUNCTION()
    void Local_OnSkillCheckFailureTrigger(const bool hadInput, const bool insane, ESkillCheckCustomType type);
    
    UFUNCTION()
    void Local_ActivateSkillCheck(UInteractionDefinition* interaction, float warningSoundDelay);
    
    UFUNCTION()
    void Local_ActivateCustomSkillCheck(ESkillCheckCustomType type, float warningSoundDelay);
    
    UFUNCTION(BlueprintPure)
    bool IsOffCenterSkillCheck() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHexSkillCheck(ADBDPlayer* dbdPlayer) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisplayed() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartDelayInSeconds() const;
    
    UFUNCTION(BlueprintPure)
    static bool CanSkillCheckTypeGrantScore(ESkillCheckCustomType type);
    
    UFUNCTION()
    void Authority_OnSkillCheckTimeout();
    
};

