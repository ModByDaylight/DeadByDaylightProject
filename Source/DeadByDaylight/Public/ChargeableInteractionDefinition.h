#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "ChargeableDefSkillCheckResponseDelegate.h"
#include "EChargeableInteractionBarType.h"
#include "ESkillCheckCustomType.h"
#include "GameplayTagContainer.h"
#include "ChargeableInteractionDefinition.generated.h"

class ADBDPlayer;
class UChargeableComponent;
class ACollectable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChargeableInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FChargeableDefSkillCheckResponse SkillCheckResponseAestheticDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChargeableDefSkillCheckResponse SkillCheckResponseAuthorityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool StopInteractionOnChargeComplete;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool HasProgressivelyHarderSkillChecks;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ProgressiveDifficultyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EChargeableInteractionBarType ProgressBarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> ProgressPips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HideProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowItemIcon;
    
protected:
    UPROPERTY(EditAnywhere)
    bool AtlantaIsCancellableWhileCharging;
    
private:
    UPROPERTY(Export, Transient)
    UChargeableComponent* _chargeableComponent;
    
    UPROPERTY(Transient)
    float _tutorialChargeableMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool ShowSpeedProficiencyForMultipleInteractors;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _interactionSpecificActionSpeedTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _interactionSpecificActionSpeedMultiplicativeTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _interactionSpecificActionSpeedAdditiveTags;
    
public:
    UChargeableInteractionDefinition();
    UFUNCTION(BlueprintPure)
    bool ShouldShowSpeedProficiencyForMultipleInteractors() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialChargeableMultiplier(float multiplierValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedBase(float speedBase);
    
    UFUNCTION(BlueprintCallable)
    void SetChargeableComponent(UChargeableComponent* chargeableComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkillCheckResponseAuthorityBP(ADBDPlayer* player, bool success, bool bonus, bool hadInput, ESkillCheckCustomType type);
    
protected:
    UFUNCTION()
    void OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkillCheckResponseAestheticBP(ADBDPlayer* player, bool success, bool bonus, bool hadInput, ESkillCheckCustomType type);
    
protected:
    UFUNCTION()
    void OnSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionCompletionStateChanged(ADBDPlayer* player, bool complete);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasSkillCheckHappened(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    float GetTunableValue(FName TunableValueID, float defaultValue) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetSuccessProbability() const;
    
    UFUNCTION(BlueprintPure)
    float GetSkillCheckProbability(const ADBDPlayer* interactingPlayer) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetSkillCheckFailureTimePenalty() const;
    
    UFUNCTION(BlueprintPure)
    float GetSkillCheckFailurePercentPenalty(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetSkillCheckDifficulityModifier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetSkillCheckCharge(ADBDPlayer* player, bool success, bool bonus, ESkillCheckCustomType type) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPipsPassed() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetPerkMultiplier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetMultiplicativeLuckBonus(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxCharge() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetItemEfficiencyModifier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetInteractionChargeSpeedMultiplier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    float GetGoodSkillCheckSuccessPercentReward(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeSpeedModifier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeAmountForTime(float deltaSeconds, ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    UChargeableComponent* GetChargeableComponent() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetBonusSkillCheckZoneSizeModifier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    float GetBonusSkillCheckSuccessPercentReward(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetAdditiveLuckBonus(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    float GetAdditiveChargeTimeReductionAsMultiplier(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ChargeWithItem(float deltaSeconds, ACollectable* item, ADBDPlayer* character);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddCharge(float deltaSeconds, ADBDPlayer* character);
    
};

