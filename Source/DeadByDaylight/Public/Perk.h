#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayModifierContainer.h"
#include "GameplayModifierData.h"
#include "OnTokenCountChangedBPDelegate.h"
#include "PerkInitializationData.h"
#include "Perk.generated.h"

class UBasePerkIconStrategy;
class UTimerObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerk : public UGameplayModifierContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, EditFixedSize, ReplicatedUsing=OnRep_PerkLevelData)
    FGameplayModifierData PerkLevelData[3];
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBasePerkIconStrategy> PerkIconStrategyClass;
    
    UPROPERTY(BlueprintAssignable)
    FOnTokenCountChangedBP OnTokenCountChangedBP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsUsable, meta=(AllowPrivateAccess=true))
    bool _isUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BroadcastWhenApplicable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BroadcastOnTimer;
    
    UPROPERTY(EditAnywhere)
    bool BroadcastCooldownTimer;
    
    UPROPERTY(EditAnywhere)
    bool BroadcastInactiveCooldownTimer;
    
    UPROPERTY(EditAnywhere)
    bool BroadcastAlways;
    
    UPROPERTY(Transient)
    UBasePerkIconStrategy* _perkIconStrategy;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PerkInitializationData)
    FPerkInitializationData _perkInitializationData;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_TokenCount, meta=(AllowPrivateAccess=true))
    int32 _tokenCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 _maxTokenCount;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_CooldownTimer)
    UTimerObject* _cooldownTimer;
    
    UPROPERTY(Export, Replicated, Transient)
    UTimerObject* _hudIconTimer;
    
public:
    UPerk();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsUsable(bool value);
    
private:
    UFUNCTION()
    void OnRep_TokenCount(int32 oldCount);
    
    UFUNCTION()
    void OnRep_PerkLevelData();
    
    UFUNCTION()
    void OnRep_PerkInitializationData();
    
    UFUNCTION()
    void OnRep_IsUsable() const;
    
    UFUNCTION()
    void OnRep_CooldownTimer() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHudIconTimerDone() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCooldownTimerDone() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTokenCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPerkLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxTokenCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsUsable() const;
    
    UFUNCTION(BlueprintPure)
    float GetHudIconTimerElapsedTimePercent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UTimerObject* GetCooldownTimer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FireActivePerkEvent(const float percentage, const int32 chargeCount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_TriggerHudIconTimer(float duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_TriggerCooldownTimer(const float coolddownTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetTokenCount(int32 value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetMaxTokenCount(int32 value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetIsUsable(bool value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_IncrementToken();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_DecrementToken();
    
};

