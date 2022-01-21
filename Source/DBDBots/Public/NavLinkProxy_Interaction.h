#pragma once
#include "CoreMinimal.h"
#include "NavLinkProxy_Base.h"
#include "EPlayerRole.h"
#include "NavLinkInteractPlayerSetup.h"
#include "NavLinkProxy_Interaction.generated.h"

class ADBDPlayer;

UCLASS()
class DBDBOTS_API ANavLinkProxy_Interaction : public ANavLinkProxy_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPlayerRole, FNavLinkInteractPlayerSetup> PlayerSetups;
    
    UPROPERTY(EditDefaultsOnly)
    float InteractionStartTimeLimit;
    
private:
    UPROPERTY(Transient)
    TMap<ADBDPlayer*, float> _playersInteractionInputAtTime;
    
public:
    ANavLinkProxy_Interaction();
};

