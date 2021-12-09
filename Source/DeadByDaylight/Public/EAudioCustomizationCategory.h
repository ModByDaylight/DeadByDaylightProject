#pragma once
#include "CoreMinimal.h"
#include "EAudioCustomizationCategory.generated.h"

UENUM()
enum class EAudioCustomizationCategory : uint8 {
    AudioCharacterName,
    AudioCharacterSubName,
    AudioCharacterHead,
    AudioCharacterClothes,
    AudioCharacterShoes,
    AudioCharacterWeapon,
    AudioCharacterAmbiance,
    AudioCharacterState,
};

