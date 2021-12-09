#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "ZombieAttractedByGeneratorBTService.generated.h"

class AGenerator;

UCLASS()
class UZombieAttractedByGeneratorBTService : public UBTService_BlueprintBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    float _genRepairingHearingRange;
    
    UFUNCTION()
    void OnInRangeChanged(const bool inRange, AGenerator* generator);
    
public:
    UZombieAttractedByGeneratorBTService();
};

