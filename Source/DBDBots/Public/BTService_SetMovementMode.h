#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ECharacterMovementTypes.h"
#include "BTService_SetMovementMode.generated.h"

UCLASS()
class DBDBOTS_API UBTService_SetMovementMode : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    ECharacterMovementTypes OnEnterMovementMode;
    
    UPROPERTY(EditInstanceOnly)
    ECharacterMovementTypes OnExitMovementMode;
    
    UBTService_SetMovementMode();
};

