#pragma once
#include "CoreMinimal.h"
#include "CompetenceFlagProvider.h"
#include "Components/ActorComponent.h"
#include "ModifierProvider.h"
#include "GameplayTagContainer.h"
#include "EGameplayModifierSource.h"
#include "GameplayTagContainer.h"
#include "PerkManager.generated.h"

class ADBDPlayer;
class UPerkCollectionComponent;
class UStatusEffectCollectionComponent;
class UStatusEffect;
class UGameplayModifierContainer;
class UPerk;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerkManager : public UActorComponent, public ICompetenceFlagProvider, public IModifierProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UPerkCollectionComponent* _perks;
    
    UPROPERTY(Export)
    UStatusEffectCollectionComponent* _statusEffects;
    
public:
    UPerkManager();
    UFUNCTION(BlueprintPure)
    bool HasStatusEffect(const FName statusEffectID) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPerkModifierOfType(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPerkFlagFromSource(FGameplayTag flag, EGameplayModifierSource modifierSource) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPerkFlag(FGameplayTag flag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyEffectWithID(FName id) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyAddonWithTag(FName tag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAllCharacterPerksEquipped() const;
    
    UFUNCTION(BlueprintPure)
    UStatusEffect* GetStatusEffect(FName id) const;
    
    UFUNCTION(BlueprintPure)
    UGameplayModifierContainer* GetSourceWithModifier(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    UGameplayModifierContainer* GetSourceWithFlag(FGameplayTag flag) const;
    
    UFUNCTION(BlueprintPure)
    float GetPerkModifierMinValueAndSource(FGameplayTag type, float startValue, UGameplayModifierContainer*& outSource) const;
    
    UFUNCTION(BlueprintPure)
    float GetPerkModifierMinValue(FGameplayTag type, float startValue) const;
    
    UFUNCTION(BlueprintPure)
    float GetPerkModifierMaxValueAndSource(FGameplayTag type, UGameplayModifierContainer*& outSource) const;
    
    UFUNCTION(BlueprintPure)
    float GetPerkModifierMaxValue(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    float GetPerkModifierAdditiveValue(FGameplayTag type, const float baseValue) const;
    
    UFUNCTION(BlueprintPure)
    float GetPerkModifier(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    UPerk* GetPerk(FName id) const;
    
    UFUNCTION(BlueprintPure)
    float GetMultiplicativeModifierValueWithCompoundNegative(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    float GetMultiplicativeModifierValueOfContainerWithCompoundNegative(FGameplayTagContainer container) const;
    
    UFUNCTION(BlueprintPure)
    float GetMultiplicativeModifierValue(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UStatusEffect*> GetAllStatusEffectsByClass(const UClass* type) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UStatusEffect*> GetAllStatusEffects(FName id) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UGameplayModifierContainer*> GetAllSourcesWithModifier(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UGameplayModifierContainer*> GetAllSourcesWithFlag(FGameplayTag flag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RemoveStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RemoveStatusEffect(UStatusEffect* statusEffect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UStatusEffect* Authority_ImposeStatusEffect(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UStatusEffect* Authority_ImposeNewStatusEffectOrChangeLifeTime(FName statusEffectID, ADBDPlayer* originatingPlayer, float lifeTime, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UStatusEffect* Authority_ImposeDynamicStatusEffect(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_EndStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID);
    
    
    // Fix for true pure virtual functions not being implemented
};

