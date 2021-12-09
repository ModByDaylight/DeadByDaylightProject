#pragma once
#include "CoreMinimal.h"
#include "ParentItemIDs.generated.h"

USTRUCT(BlueprintType)
struct FParentItemIDs {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool MatchAnyItemID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ItemIDs;
    
    DEADBYDAYLIGHT_API FParentItemIDs();
};

