#pragma once
#include "CoreMinimal.h"
#include "PerkLevelDefinition.generated.h"

USTRUCT(BlueprintType)
struct FPerkLevelDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CountRequired;
    
    DEADBYDAYLIGHT_API FPerkLevelDefinition();
};

