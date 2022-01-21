#pragma once
#include "CoreMinimal.h"
#include "ELoadoutItemType.h"
#include "AISkill_Interaction.h"
#include "AISkill_InteractionUseItem.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem : public UAISkill_Interaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ELoadoutItemType ItemType;
    
    UAISkill_InteractionUseItem();
};

