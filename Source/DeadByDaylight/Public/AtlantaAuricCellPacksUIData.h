#pragma once
#include "CoreMinimal.h"
#include "CurrencyPurchaseData.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaAuricCellPacksUIData.generated.h"

USTRUCT()
struct FAtlantaAuricCellPacksUIData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FCurrencyPurchaseData> CurrencyPurchaseData;
    
    UPROPERTY(Transient)
    int32 FirstPurchaseBundleMultiplier;
    
    UPROPERTY(Transient)
    FDateTime FirstPurchaseBundleMultiplierEndDate;
    
    UPROPERTY(Transient)
    bool IsSet;
    
    DEADBYDAYLIGHT_API FAtlantaAuricCellPacksUIData();
};

