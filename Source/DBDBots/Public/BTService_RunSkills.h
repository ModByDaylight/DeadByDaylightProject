#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTService_RunSkills.generated.h"

UCLASS()
class DBDBOTS_API UBTService_RunSkills : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FGameplayTag Context;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFilterKey;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<EBasicKeyOperation::Type> FilterOperation;
    
    UBTService_RunSkills();
};

