#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_Interaction.h"
#include "AISkill_Interaction_DismissCrow.generated.h"

UCLASS(EditInlineNew)
class THEK26_API UAISkill_Interaction_DismissCrow : public UAISkill_Interaction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _dismissCrowMaxCharge;
    
public:
    UAISkill_Interaction_DismissCrow();
};

