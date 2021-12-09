#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "ForThePeople.generated.h"

class ACamperPlayer;

UCLASS()
class UForThePeople : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _brokenEffectDurations[3];
    
    UPROPERTY(EditDefaultsOnly)
    FSecondaryInteractionProperties _secondaryActionProperties;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnActionInputPressed();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnHealingAbilityUsed(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor);
    
private:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_OnHealAbilityUsed(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor);
    
public:
    UForThePeople();
};

