#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Oppression.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOppression : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 _nbGeneratorsAffectedByPerk[3];
    
    UPROPERTY(EditDefaultsOnly)
    int32 _perkCooldown[3];
    
public:
    UOppression();
};

