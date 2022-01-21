#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ZanshinTactics.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UZanshinTactics : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _coolDownDuration[3];
    
public:
    UZanshinTactics();
};

