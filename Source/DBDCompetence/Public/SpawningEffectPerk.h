#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "PerkLevelEffectArray.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "SpawningEffectPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpawningEffectPerk : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FPerkLevelEffectArray _perkLevelEffects[3];
    
    UPROPERTY(Transient)
    FPlayerStatusEffectSpawnerHelper _effectSpawnerHelper;
    
public:
    USpawningEffectPerk();
};

