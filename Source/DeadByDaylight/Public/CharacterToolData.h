#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "CharacterToolData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FCharacterToolData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPlayerRole Role;
    
    UPROPERTY(EditAnywhere)
    int32 CharacterId;
    
    UPROPERTY(EditAnywhere)
    FName OutfitId;
    
    UPROPERTY(EditAnywhere)
    FName CharmId;
    
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
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* AnimationToPlay;
    
    DEADBYDAYLIGHT_API FCharacterToolData();
};

