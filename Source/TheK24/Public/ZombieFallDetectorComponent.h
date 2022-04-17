#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "ZombieFallDetectorComponent.generated.h"

class ACharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieFallDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _zombieDistanceConsideredSmashFall;
    
public:
    UZombieFallDetectorComponent();
private:
    UFUNCTION()
    void Authority_OnMovementModeChange(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);
    
};

