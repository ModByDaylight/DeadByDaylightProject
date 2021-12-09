#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISkill_Interaction.h"
#include "AISkill_InteractionSetTrap.generated.h"

class AActor;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionSetTrap : public UAISkill_Interaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> TrapClass;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxDistanceFromPointOfInterest;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxDistanceFromAnotherSetTrap;
    
    UAISkill_InteractionSetTrap();
};

