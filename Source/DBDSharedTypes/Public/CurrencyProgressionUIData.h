#pragma once
#include "CoreMinimal.h"
#include "CurrencyProgressionUIData.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCurrencyProgressionUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TooltipTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TooltipDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> RewardIcon;
    
    DBDSHAREDTYPES_API FCurrencyProgressionUIData();
};

