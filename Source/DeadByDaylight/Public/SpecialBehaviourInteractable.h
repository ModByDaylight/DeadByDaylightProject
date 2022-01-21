#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "SpecialBehaviourInteractable.generated.h"

class ADBDPlayerState;

UCLASS()
class DEADBYDAYLIGHT_API ASpecialBehaviourInteractable : public AInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    TWeakObjectPtr<ADBDPlayerState> _specialBehaviourOwner;
    
public:
    ASpecialBehaviourInteractable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

