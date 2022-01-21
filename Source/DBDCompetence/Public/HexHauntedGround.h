#pragma once
#include "CoreMinimal.h"
#include "HexPerk.h"
#include "HexHauntedGround.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHexHauntedGround : public UHexPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _exposedStatusEffectDuration[3];
    
public:
    UHexHauntedGround();
};

