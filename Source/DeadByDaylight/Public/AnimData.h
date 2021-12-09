#pragma once
#include "CoreMinimal.h"
#include "ECharacterStance.h"
#include "AnimData.generated.h"

USTRUCT(BlueprintType)
struct FAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECharacterStance Stance;
    
    DEADBYDAYLIGHT_API FAnimData();
};

