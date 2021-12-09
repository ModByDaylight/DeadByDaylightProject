#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "InteractionProficiencyProperties.generated.h"

class UInteractionProficiency;

USTRUCT(BlueprintType)
struct FInteractionProficiencyProperties : public FDBDTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ProficiencyID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UInteractionProficiency> ProficiencyBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> BuffLevelThresholds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> DebuffLevelThresholds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString IconFilePath;
    
public:
    DEADBYDAYLIGHT_API FInteractionProficiencyProperties();
};

