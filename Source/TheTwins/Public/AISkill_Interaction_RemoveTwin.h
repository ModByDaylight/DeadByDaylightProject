#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_Interaction.h"
#include "AISkill_Interaction_RemoveTwin.generated.h"

UCLASS(EditInlineNew)
class THETWINS_API UAISkill_Interaction_RemoveTwin : public UAISkill_Interaction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _removeTwinMaxCharge;
    
public:
    UAISkill_Interaction_RemoveTwin();
};

