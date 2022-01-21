#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "DeathBedAntiCampComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeathBedAntiCampComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _anticampZoneDistance;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _anticampZoneTimeToTrigger;
    
public:
    UDeathBedAntiCampComponent();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerDeathBedRelocate();
    
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
};

