#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SmashHit.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USmashHit : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _exhaustedTime[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _hasteTime[3];
    
public:
    USmashHit();
};

