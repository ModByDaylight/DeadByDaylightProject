#pragma once
#include "CoreMinimal.h"
#include "ReplicatedTrailPointList.h"
#include "TrailControllerBase.h"
#include "Engine/NetSerialization.h"
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
    
public:
    ATormentTrailController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnTormentTrailPoint(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation);
    
};

