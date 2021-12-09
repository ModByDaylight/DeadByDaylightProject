#pragma once
#include "CoreMinimal.h"
#include "AISkill_Strafe.h"
#include "AISkill_StrafeChained.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_StrafeChained : public UAISkill_Strafe {
    GENERATED_BODY()
public:
    UAISkill_StrafeChained();
};

