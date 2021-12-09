#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ItemUIData.h"
#include "PromoPackData.generated.h"

class UPaperSprite;

USTRUCT()
struct FPromoPackData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperSprite> PromoPackIcon;
    
    UPROPERTY(EditAnywhere)
    FItemUIData UIData;
    
    DEADBYDAYLIGHT_API FPromoPackData();
};

