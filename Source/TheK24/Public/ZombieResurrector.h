#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "ZombieResurrector.generated.h"

class AZombieCharacter;

UCLASS()
class UZombieResurrector : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerLevelToSpawnZombie;
    
    UPROPERTY(Transient)
    TArray<AZombieCharacter*> _delayedSpawnZombies;
    
    UFUNCTION()
    void Authority_OnKillerPowerLevelChanged(int32 powerLevel);
    
public:
    UZombieResurrector();
};

