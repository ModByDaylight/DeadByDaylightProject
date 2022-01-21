#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Poised.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UPoised : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _activationTime[3];
    
public:
    UPoised();
};

