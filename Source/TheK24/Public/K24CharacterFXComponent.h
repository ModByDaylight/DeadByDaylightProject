#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K24CharacterFXComponent.generated.h"

class AZombieCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FK24CharacterFXComponentOnPowerLevelChangedFx, int32, powerlevel);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FK24CharacterFXComponentLocal_OnKillerHitZombie, AZombieCharacter*, zombieCharater);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FK24CharacterFXComponentLocal_OnKillerContaminatedSurvivor);

UCLASS()
class UK24CharacterFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FK24CharacterFXComponentOnPowerLevelChangedFx OnPowerLevelChangedFx;
    
    UPROPERTY(BlueprintAssignable)
    FK24CharacterFXComponentLocal_OnKillerHitZombie Local_OnKillerHitZombie;
    
    UPROPERTY(BlueprintAssignable)
    FK24CharacterFXComponentLocal_OnKillerContaminatedSurvivor Local_OnKillerContaminatedSurvivor;
    
private:
    UFUNCTION()
    void Local_OnKillerPowerLevelChanged(int32 powerLevel);
    
public:
    UK24CharacterFXComponent();
};

