#pragma once
#include "CoreMinimal.h"
#include "CharacterCustomizationDropdown.h"
#include "DataTableDropdown.h"
#include "CharmDropdown.h"
#include "DebugLoadoutAddon.h"
#include "DebugLoadoutPerk.h"
#include "CamperLoadout.generated.h"

USTRUCT(BlueprintType)
struct FCamperLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterCustomizationDropdown Camper;
    
    UPROPERTY(EditAnywhere)
    FCharmDropdown Slot0_CharmID;
    
    UPROPERTY(EditAnywhere)
    FCharmDropdown Slot1_CharmID;
    
    UPROPERTY(EditAnywhere)
    FCharmDropdown Slot2_CharmID;
    
    UPROPERTY(EditAnywhere)
    FDataTableDropdown ItemID;
    
    UPROPERTY(EditAnywhere)
    TArray<FDebugLoadoutAddon> AddonIDs;
    
    UPROPERTY(EditAnywhere)
    TArray<FDebugLoadoutPerk> Perks;
    
    DEADBYDAYLIGHT_API FCamperLoadout();
};

