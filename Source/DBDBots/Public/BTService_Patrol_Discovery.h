#pragma once
#include "CoreMinimal.h"
#include "BTService_Patrol.h"
#include "BTService_Patrol_Discovery.generated.h"

UCLASS()
class DBDBOTS_API UBTService_Patrol_Discovery : public UBTService_Patrol {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool RejectPatrolPointIfInPressureZone;
    
    UPROPERTY(EditInstanceOnly)
    int32 MaxFindRandomLocationOnTileAttempts;
    
    UPROPERTY(EditInstanceOnly)
    int32 FirstFindOnNbNeighborTiles;
    
    UBTService_Patrol_Discovery();
};

