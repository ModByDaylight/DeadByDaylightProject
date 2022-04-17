#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K24WhipAttack.generated.h"

class ACamperPlayer;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK24_API UK24WhipAttack : public UPounceAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _attackSphereTraceRadius;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _attackMinDistanceToObstruction;
    
    UPROPERTY(EditAnywhere)
    FVector _whipMovementFromOffset;
    
    UPROPERTY(EditAnywhere)
    FVector _whipMovementToOffset;
    
public:
    UK24WhipAttack();
    UFUNCTION(Reliable, Server)
    void Server_ContaminatePlayer(ACamperPlayer* target, const float targetLocationTimestamp);
    
    UFUNCTION(Client, Reliable)
    void Client_ContaminationResult(ADBDPlayer* target, bool isValid);
    
};

