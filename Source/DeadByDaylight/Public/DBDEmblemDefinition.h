#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EmblemProgressionID.h"
#include "EPlayerRole.h"
#include "EEmblemEvaluation.h"
#include "DBDEmblemDefinition.generated.h"

class UDBDEmblem;

USTRUCT(BlueprintType)
struct FDBDEmblemDefinition : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EPlayerRole> Roles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UDBDEmblem> CustomEmblem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> IconFilePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEmblemEvaluation EmblemEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEmblemProgressionID> EmblemProgressionData;
    
    DEADBYDAYLIGHT_API FDBDEmblemDefinition();
};

