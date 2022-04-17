#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_InteractionUseItem_LamentConfiguration.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InteractionUseItem_LamentConfiguration : public UAISkill_InteractionUseItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _solveLamentMaxCharge;
    
public:
    UAISkill_InteractionUseItem_LamentConfiguration();
};

