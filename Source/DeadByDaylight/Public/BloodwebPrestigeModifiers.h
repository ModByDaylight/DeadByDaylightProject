#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebPrestigeModifiers.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebPrestigeModifiers : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CommonItemProbabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UncommonItemProbabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RareItemProbabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VeryRareItemProbabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UltraRareItemProbabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArtifactItemProbabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpectralItemProbabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LegendaryItemProbabilityModifier;
    
    DEADBYDAYLIGHT_API FBloodwebPrestigeModifiers();
};

