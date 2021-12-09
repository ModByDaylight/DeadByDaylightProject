#pragma once
#include "CoreMinimal.h"
#include "CharacterCustomizationDropdown.h"
#include "DebugLoadoutAddon.h"
#include "DebugLoadoutPerk.h"
#include "SlasherLoadout.generated.h"

USTRUCT(BlueprintType)
struct FSlasherLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterCustomizationDropdown Slasher;
    
    UPROPERTY(EditAnywhere)
    TArray<FDebugLoadoutAddon> PowerAddonIDs;
    
    UPROPERTY(EditAnywhere)
    TArray<FDebugLoadoutPerk> Perks;
    
    DEADBYDAYLIGHT_API FSlasherLoadout();
};

