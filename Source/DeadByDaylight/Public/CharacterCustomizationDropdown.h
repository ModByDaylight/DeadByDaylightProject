#pragma once
#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "CharacterCustomizationDropdown.generated.h"

USTRUCT()
struct FCharacterCustomizationDropdown : public FCharacterDropdown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName OutfitId;
    
    UPROPERTY(EditAnywhere)
    FName SurvivorHead;
    
    UPROPERTY(EditAnywhere)
    FName SurvivorTorso;
    
    UPROPERTY(EditAnywhere)
    FName SurvivorLegs;
    
    UPROPERTY(EditAnywhere)
    FName KillerHead;
    
    UPROPERTY(EditAnywhere)
    FName KillerBody;
    
    UPROPERTY(EditAnywhere)
    FName KillerWeapon;
    
    DEADBYDAYLIGHT_API FCharacterCustomizationDropdown();
};

