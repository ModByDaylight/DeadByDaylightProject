#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "FlipFlop.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UFlipFlop : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _recoveryProgressionConversionRatio[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _maxWiggleProgression[3];
    
public:
    UFlipFlop();
private:
    UFUNCTION()
    void Authority_OnPickedUp(ADBDPlayer* picker);
    
};

