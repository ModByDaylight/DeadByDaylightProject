#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ButtonSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FButtonSequenceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Timeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Platforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinKeysForFailedAttempt;
    
    INPUTUTILITIES_API FButtonSequenceData();
};

