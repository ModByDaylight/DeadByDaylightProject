#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_HasDynamicSubtree.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_HasDynamicSubtree : public UBTDecorator_TickableBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FGameplayTag InjectTag;
    
    UBTDecorator_HasDynamicSubtree();
};

