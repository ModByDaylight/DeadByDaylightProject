#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SurveillancePerk.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class USurveillancePerk : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float generatorRegressionStopRevealTime;
    
public:
    USurveillancePerk();
private:
    UFUNCTION()
    void HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player);
    
};

