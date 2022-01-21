#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedTrailItem.generated.h"

class ATormentTrailPoint;

USTRUCT(BlueprintType)
struct FReplicatedTrailItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATormentTrailPoint* TrailPoint;
    
    UPROPERTY()
    uint8 OrderInTrail;
    
    UPROPERTY()
    FVector_NetQuantize10 PointRelativeLocation;
    
    UPROPERTY()
    FRotator PointRotation;
    
    THEEXECUTIONER_API FReplicatedTrailItem();
};

