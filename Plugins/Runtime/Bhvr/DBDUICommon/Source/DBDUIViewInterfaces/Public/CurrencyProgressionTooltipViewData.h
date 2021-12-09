#pragma once
#include "CoreMinimal.h"
#include "CurrencyProgressionTooltipViewData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FCurrencyProgressionTooltipViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsCurrency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText EndTiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial;
    
    FCurrencyProgressionTooltipViewData();
};

