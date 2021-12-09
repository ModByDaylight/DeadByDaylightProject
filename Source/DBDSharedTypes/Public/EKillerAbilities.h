#pragma once
#include "CoreMinimal.h"
#include "EKillerAbilities.generated.h"

UENUM(BlueprintType)
enum class EKillerAbilities : uint8 {
    VE_None,
    VE_SpawnTraps,
    VE_Cloak,
    VE_Chainsaw,
    VE_Blink,
    VE_PhantomTrap,
    VE_Stalker,
    VE_Killer07Ability,
    VE_Killer08Ability,
    VE_LFChainsaw,
    VE_InduceDreams,
    VE_ReverseBearTrap,
    VE_GasBomb,
    VE_PhaseWalk,
    VE_Frenzy,
    VE_Vomit,
    VE_GhostStalker,
    VE_GroundPortals,
    VE_DemonMode,
    VE_HarpoonRifle,
    VE_TormentMode,
    VE_K21Power,
    VE_K22Power,
    VE_ThrowingKnives,
    VE_K24Power,
    VE_Zombies,
    VE_K25Power,
    VE_K26Power,
    VE_MAX UMETA(Hidden),
};

