#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h"
#include "BTDecorator_ExtCompareBBEntries.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_ExtCompareBBEntries : public UBTDecorator_CompareBBEntries {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float Tolerance;
    
    UBTDecorator_ExtCompareBBEntries();
};

