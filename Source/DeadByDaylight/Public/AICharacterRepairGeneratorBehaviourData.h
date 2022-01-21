#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AICharacterRepairGeneratorBehaviourData.generated.h"

class AGenerator;

UCLASS(BlueprintType)
class UAICharacterRepairGeneratorBehaviourData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGenerator* _generator;
    
    UPROPERTY(Transient)
    ECharacterMovementTypes _characterMovementType;
    
public:
    UAICharacterRepairGeneratorBehaviourData();
    UFUNCTION(BlueprintCallable)
    void Init(AGenerator* generator, ECharacterMovementTypes characterMovementType);
    
};

