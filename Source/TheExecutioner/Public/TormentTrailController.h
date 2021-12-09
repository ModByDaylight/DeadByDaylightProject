#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TrailControllerBase.h"
#include "ReplicatedTrailPointList.h"
#include "UObject/NoExportTypes.h"
#include "TormentTrailController.generated.h"

class ATormentTrailPoint;
class AMobileTormentTrailRenderer;

UCLASS()
class ATormentTrailController : public ATrailControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FReplicatedTrailPointList _trailPointList;
    
    UPROPERTY(Transient)
    AMobileTormentTrailRenderer* _mobileTormentTrailRenderer;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnTormentTrailPoint(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATormentTrailController();
};

