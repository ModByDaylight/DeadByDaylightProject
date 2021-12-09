#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "FlipFlop.generated.h"

class ADBDPlayer;

UCLASS()
class DBDCOMPETENCE_API UFlipFlop : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _recoveryProgressionConversionRatio[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _maxWiggleProgression[3];
    
private:
    UFUNCTION()
    void Authority_OnPickedUp(ADBDPlayer* picker);
    
public:
    UFlipFlop();
};

