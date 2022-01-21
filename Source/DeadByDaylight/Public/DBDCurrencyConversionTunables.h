#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECurrencyType.h"
#include "CurrencyConversion.h"
#include "DBDCurrencyConversionTunables.generated.h"

UCLASS(BlueprintType)
class UDBDCurrencyConversionTunables : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ECurrencyType, FCurrencyConversion> Currencies;
    
public:
    UDBDCurrencyConversionTunables();
};

