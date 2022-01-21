#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_Throw.h"
#include "AISkill_InteractionTarget_ThrowAntidote.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UAISkill_InteractionTarget_ThrowAntidote : public UAISkill_InteractionTarget_Throw {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _minPathLengthForThrow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _minThrowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _cooldownTime;
    
public:
    UAISkill_InteractionTarget_ThrowAntidote();
protected:
    UFUNCTION()
    void OnPathUpdated();
    
};

