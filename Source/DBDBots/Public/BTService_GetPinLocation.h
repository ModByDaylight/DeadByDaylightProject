#pragma once
#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTService_GetPinLocation.generated.h"

UCLASS()
class DBDBOTS_API UBTService_GetPinLocation : public UBTService_OnRelevantBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBToSetKey;
    
    UPROPERTY(EditInstanceOnly)
    FGameplayTag PinTag;
    
    UBTService_GetPinLocation();
};

