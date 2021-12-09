#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h"
#include "BTDecorator_ExtIsBBEntryOfClass.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_ExtIsBBEntryOfClass : public UBTDecorator_IsBBEntryOfClass {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool InvertConditition;
    
    UBTDecorator_ExtIsBBEntryOfClass();
};

