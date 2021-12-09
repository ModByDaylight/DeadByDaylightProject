#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EAINodeRelevancyOptions.h"
#include "BTService_OnRelevantBase.generated.h"

UCLASS(Abstract)
class DBDBOTS_API UBTService_OnRelevantBase : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EAINodeRelevancyOptions When;
    
    UBTService_OnRelevantBase();
};

