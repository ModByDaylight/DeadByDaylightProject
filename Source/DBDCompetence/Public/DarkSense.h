#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DarkSense.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDarkSense : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _effectDurationOnGeneratorComplete;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _effectDurationOnFinalGeneratorComplete[3];
    
public:
    UDarkSense();
};

