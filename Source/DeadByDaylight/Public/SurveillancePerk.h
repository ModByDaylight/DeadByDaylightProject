#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SurveillancePerk.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS()
class USurveillancePerk : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float generatorRegressionStopRevealTime;
    
private:
    UFUNCTION()
    void HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player);
    
public:
    USurveillancePerk();
};

