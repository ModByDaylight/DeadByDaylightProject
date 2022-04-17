#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "EK25TeleportLocationStatus.h"
#include "UObject/NoExportTypes.h"
#include "K25KillerTeleportationPositionFinderComponent.generated.h"

class AEscapeDoor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK25KillerTeleportationPositionFinderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _rayCastZOffet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _rayCastLength;
    
    UPROPERTY(EditDefaultsOnly)
    float _killerInRangeMinimumDistanceCheck;
    
    UPROPERTY(EditDefaultsOnly)
    float _killerInRangeMaxRangePercentage;
    
    UPROPERTY(EditDefaultsOnly)
    float _deltaHeightThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _minDistanceFromLamentConfiguration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _maxDistanceFromLamentConfiguration;
    
private:
    UPROPERTY(EditAnywhere)
    float _timeBetweenFailsafeChecks;
    
    UPROPERTY(Transient)
    EK25TeleportLocationStatus _teleportLocationStatus;
    
    UPROPERTY(Transient)
    FVector _bestTeleportLocation;
    
    UPROPERTY(Transient)
    TArray<AEscapeDoor*> _escapeDoors;
    
public:
    UK25KillerTeleportationPositionFinderComponent();
};

