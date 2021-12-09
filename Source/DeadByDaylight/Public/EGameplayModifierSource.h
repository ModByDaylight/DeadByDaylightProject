#pragma once
#include "CoreMinimal.h"
#include "EGameplayModifierSource.generated.h"

UENUM()
enum class EGameplayModifierSource : uint8 {
    VE_Perk,
    VE_StatusEffect,
    VE_Item,
    VE_ItemAddon,
    VE_All,
    VE_PerkOrStatusEffect,
    VE_PerkStatusOrAddon,
    VE_MAX UMETA(Hidden),
};

