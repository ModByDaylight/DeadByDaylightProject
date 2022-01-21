#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "ZombieResurrector.generated.h"

class AZombieCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieResurrector : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerLevelToSpawnZombie;
    
    UPROPERTY(Transient)
    TArray<AZombieCharacter*> _delayedSpawnZombies;
    
public:
    UZombieResurrector();
private:
    UFUNCTION()
    void Authority_OnKillerPowerLevelChanged(int32 powerLevel);
    
};

