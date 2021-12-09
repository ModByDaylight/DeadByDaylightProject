#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BeMaterialVector.generated.h"

USTRUCT(BlueprintType)
struct FBeMaterialVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor Vector;
    
    BEUTIL_API FBeMaterialVector();
};

