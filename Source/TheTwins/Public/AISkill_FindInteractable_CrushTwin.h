#pragma once
#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "DBDTunableRowHandle.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_CrushTwin.generated.h"

UCLASS(EditInlineNew)
class THETWINS_API UAISkill_FindInteractable_CrushTwin : public UAISkill_FindInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter _crushVictorGoalWeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter _recoveringTimeEstimationErrorMin;
    
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter _recoveringTimeEstimationErrorMax;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _destroyTwinMaxCharge;
    
public:
    UAISkill_FindInteractable_CrushTwin();
};

