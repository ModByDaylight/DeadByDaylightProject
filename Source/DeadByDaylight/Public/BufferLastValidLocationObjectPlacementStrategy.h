#pragma once
#include "CoreMinimal.h"
#include "ObjectPlacementUpdateStrategy.h"
#include "BufferLastValidLocationObjectPlacementStrategy.generated.h"

UCLASS(EditInlineNew)
class UBufferLastValidLocationObjectPlacementStrategy : public UObjectPlacementUpdateStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float _maxDistanceToOwner;
    
    UBufferLastValidLocationObjectPlacementStrategy();
};

