#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedTrailItem.h"
#include "ReplicatedTrailPointList.generated.h"

class ATormentTrailController;

USTRUCT(BlueprintType)
struct FReplicatedTrailPointList : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FReplicatedTrailItem> Items;
    
    UPROPERTY(Transient)
    ATormentTrailController* TormentTrailController;
    
    THEEXECUTIONER_API FReplicatedTrailPointList();
};

