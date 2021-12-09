#pragma once
#include "CoreMinimal.h"
#include "AccessKey.generated.h"

USTRUCT(BlueprintType)
struct FAccessKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString KeyId;
    
    UPROPERTY()
    FString Key;
    
    S3COMMAND_API FAccessKey();
};

