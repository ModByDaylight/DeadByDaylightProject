#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AICharacterHideInLockerBehaviourData.generated.h"

class ALocker;

UCLASS(BlueprintType)
class UAICharacterHideInLockerBehaviourData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ECharacterMovementTypes CharacterMovementType;
    
    UAICharacterHideInLockerBehaviourData();
    UFUNCTION(BlueprintCallable)
    void Init(ALocker* locker, ECharacterMovementTypes NewCharacterMovementType);
    
};

