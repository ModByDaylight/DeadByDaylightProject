#pragma once
#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AIIntentionValidatorInterface.h"
#include "AISkill_Interaction_ForThePeople.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_ForThePeople : public UAISkill_Interaction, public IAIIntentionValidatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FString BlockInteractionId;
    
    UAISkill_Interaction_ForThePeople();
    
    // Fix for true pure virtual functions not being implemented
};

