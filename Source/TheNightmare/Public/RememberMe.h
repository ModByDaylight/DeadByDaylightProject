#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "RememberMe.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class URememberMe : public UPerk {
    GENERATED_BODY()
public:
    URememberMe();
    UFUNCTION(BlueprintPure)
    bool DidLoseHealthState(const AActor* damagedActor, int32 oldHealthStateCount) const;
    
};

