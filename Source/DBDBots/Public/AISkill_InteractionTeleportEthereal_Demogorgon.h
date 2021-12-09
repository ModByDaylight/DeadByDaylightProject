#pragma once
#include "CoreMinimal.h"
#include "AISkill_InteractionTeleportEthereal.h"
#include "AISkill_InteractionTeleportEthereal_Demogorgon.generated.h"

class ADemogorgonPortal;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTeleportEthereal_Demogorgon : public UAISkill_InteractionTeleportEthereal {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MaxRangeFromFirstPortal;
    
private:
    UPROPERTY(Transient)
    ADemogorgonPortal* _firstPortal;
    
    UPROPERTY(Transient)
    ADemogorgonPortal* _secondPortal;
    
public:
    UAISkill_InteractionTeleportEthereal_Demogorgon();
};

