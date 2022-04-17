#include "PerkManager.h"

class UStatusEffect;
class UPerk;
class UGameplayModifierContainer;
class ADBDPlayer;

bool UPerkManager::HasStatusEffect(const FName statusEffectID) const {
    return false;
}

bool UPerkManager::HasPerkModifierOfType(FGameplayTag type) const {
    return false;
}

bool UPerkManager::HasPerkFlagFromSource(FGameplayTag flag, EGameplayModifierSource modifierSource) const {
    return false;
}

bool UPerkManager::HasPerkFlag(FGameplayTag flag) const {
    return false;
}

bool UPerkManager::HasAnyEffectWithID(FName id) const {
    return false;
}

bool UPerkManager::HasAnyAddonWithTag(FName tag) const {
    return false;
}

bool UPerkManager::HasAllCharacterPerksEquipped() const {
    return false;
}

UStatusEffect* UPerkManager::GetStatusEffect(FName id) const {
    return NULL;
}

UGameplayModifierContainer* UPerkManager::GetSourceWithModifier(FGameplayTag type) const {
    return NULL;
}

UGameplayModifierContainer* UPerkManager::GetSourceWithFlag(FGameplayTag flag) const {
    return NULL;
}

float UPerkManager::GetPerkModifierMinValueAndSource(FGameplayTag type, float startValue, UGameplayModifierContainer*& outSource) const {
    return 0.0f;
}

float UPerkManager::GetPerkModifierMinValue(FGameplayTag type, float startValue) const {
    return 0.0f;
}

float UPerkManager::GetPerkModifierMaxValueAndSource(FGameplayTag type, UGameplayModifierContainer*& outSource) const {
    return 0.0f;
}

float UPerkManager::GetPerkModifierMaxValue(FGameplayTag type) const {
    return 0.0f;
}

float UPerkManager::GetPerkModifierAdditiveValue(FGameplayTag type, const float baseValue) const {
    return 0.0f;
}

float UPerkManager::GetPerkModifier(FGameplayTag type) const {
    return 0.0f;
}

UPerk* UPerkManager::GetPerk(FName id) const {
    return NULL;
}

float UPerkManager::GetMultiplicativeModifierValueWithCompoundNegative(FGameplayTag type) const {
    return 0.0f;
}

float UPerkManager::GetMultiplicativeModifierValueOfContainerWithCompoundNegative(FGameplayTagContainer container) const {
    return 0.0f;
}

float UPerkManager::GetMultiplicativeModifierValue(FGameplayTag type) const {
    return 0.0f;
}

TArray<UStatusEffect*> UPerkManager::GetAllStatusEffectsByClass(const UClass* type) const {
    return TArray<UStatusEffect*>();
}

TArray<UStatusEffect*> UPerkManager::GetAllStatusEffects(FName id) const {
    return TArray<UStatusEffect*>();
}

TArray<UGameplayModifierContainer*> UPerkManager::GetAllSourcesWithModifier(FGameplayTag type) const {
    return TArray<UGameplayModifierContainer*>();
}

TArray<UGameplayModifierContainer*> UPerkManager::GetAllSourcesWithFlag(FGameplayTag flag) const {
    return TArray<UGameplayModifierContainer*>();
}

void UPerkManager::Authority_RemoveStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID) {
}

void UPerkManager::Authority_RemoveStatusEffect(UStatusEffect* statusEffect) {
}

UStatusEffect* UPerkManager::Authority_ImposeStatusEffect(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime) {
    return NULL;
}

UStatusEffect* UPerkManager::Authority_ImposeNewStatusEffectOrChangeLifeTime(FName statusEffectID, ADBDPlayer* originatingPlayer, float lifeTime, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay) {
    return NULL;
}

UStatusEffect* UPerkManager::Authority_ImposeDynamicStatusEffect(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect) {
    return NULL;
}

void UPerkManager::Authority_EndStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID) {
}

UPerkManager::UPerkManager() {
    this->_perks = NULL;
    this->_statusEffects = NULL;
}

