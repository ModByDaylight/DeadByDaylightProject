#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AITunableParameter.h"
#include "AISkill_InteractionUseItem_Firecracker.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_Firecracker : public UAISkill_InteractionUseItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter StartMaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetFaceMeMaxAngle;
    
    UAISkill_InteractionUseItem_Firecracker();
};

