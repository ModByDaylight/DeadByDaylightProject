#pragma once
#include "CoreMinimal.h"
#include "EDeepLinkUid.generated.h"

UENUM(BlueprintType)
enum class EDeepLinkUid : uint8 {
    NONE,
    StorefrontSpecialOffers,
    StorefrontFeatured,
    StorefrontPremium,
    StorefrontSubscription,
    Calendar,
    RitualsStarter,
    RitualsDaily,
    RitualsWeekly,
    MenuCharactersSurvivors,
    MenuCharactersKillers,
    MenuCustomizations,
    MenuEvents,
    MenuFriends,
    Loadout,
    BloodmarketSurvivors,
    BloodmarketKillers,
    External,
};

