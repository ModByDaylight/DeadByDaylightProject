#pragma once
#include "CoreMinimal.h"
#include "PromoPackContentTypeData.generated.h"

class UTexture2D;
class UUMGPromoPackItemWidget;

USTRUCT(BlueprintType)
struct FPromoPackContentTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUMGPromoPackItemWidget> CorrespondingWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> ContentTypeIcon;
    
    DEADBYDAYLIGHT_API FPromoPackContentTypeData();
};

