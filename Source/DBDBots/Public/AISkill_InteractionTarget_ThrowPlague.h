#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_Throw.h"
#include "GameplayTagContainer.h"
#include "AISkill_InteractionTarget_ThrowPlague.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_ThrowPlague : public UAISkill_InteractionTarget_Throw {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag ProjectileDamageSickTargetTag;
    
    UAISkill_InteractionTarget_ThrowPlague();
};

