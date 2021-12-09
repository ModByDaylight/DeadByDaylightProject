#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTeleportEthereal.h"
#include "AISkill_InteractionTeleportEthereal_Nightmare.generated.h"

class AGenerator;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleportEthereal_Nightmare : public UAISkill_InteractionTeleportEthereal {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float TeleportIfPathLengthSavedAboveRange;
    
private:
    UPROPERTY(Transient)
    AGenerator* _toGenerator;
    
public:
    UAISkill_InteractionTeleportEthereal_Nightmare();
};

