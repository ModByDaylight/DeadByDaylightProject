#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BTTask_RunSkills.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_RunSkills : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FGameplayTag Context;
    
    UBTTask_RunSkills();
};

