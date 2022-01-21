#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Beartrap_DisarmRevealer.generated.h"

class ABearTrap;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_Beartrap_DisarmRevealer : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FName _auraRevealStatusEffectID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float _auraRevealDuration;
    
    UPROPERTY(Transient)
    TMap<ABearTrap*, ACamperPlayer*> _disarmedTrapMap;
    
public:
    UAddon_Beartrap_DisarmRevealer();
};

