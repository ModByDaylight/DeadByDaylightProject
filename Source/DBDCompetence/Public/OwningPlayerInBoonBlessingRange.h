#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInBoonBlessingRange.generated.h"

class ATotem;

UCLASS()
class UOwningPlayerInBoonBlessingRange : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ATotem* _boundTotem;
    
public:
    UOwningPlayerInBoonBlessingRange();
};

