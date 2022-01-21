#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AIHealAllyBehaviourData.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType)
class UAIHealAllyBehaviourData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ACamperPlayer* _targetAlly;
    
public:
    UAIHealAllyBehaviourData();
    UFUNCTION(BlueprintCallable)
    void Init(ACamperPlayer* allyToHealTarget);
    
};

