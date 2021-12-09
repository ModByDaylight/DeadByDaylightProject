#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SetPathSpeedFactor.generated.h"

UCLASS()
class DBDBOTS_API UBTService_SetPathSpeedFactor : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float SpeedFactor;
    
    UBTService_SetPathSpeedFactor();
};

