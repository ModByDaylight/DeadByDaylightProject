#pragma once
#include "CoreMinimal.h"
#include "ETutorialObjectivePlayerActionMapping.generated.h"

UENUM(BlueprintType)
enum class ETutorialObjectivePlayerActionMapping : uint8 {
    None,
    Action_Camper,
    Interact_Camper,
    Interact_Slasher,
    Run_Camper,
    Attack_Slasher,
    SecondaryAction_Camper,
    ItemUse_Camper,
    Crouch,
    ItemDrop_Camper,
    ItemUse_Slasher,
    ItemDrop_Slasher,
    Mash_Camper,
    FastInteract_Camper,
    SecondaryAction_Slasher,
    Action_Slasher,
    Struggle,
    MoveAxes,
    LookAxes,
    Count,
};

