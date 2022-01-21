#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SpiesFromTheShadows.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpiesFromTheShadows : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _cooldownDurationSecs;
    
public:
    USpiesFromTheShadows();
};

