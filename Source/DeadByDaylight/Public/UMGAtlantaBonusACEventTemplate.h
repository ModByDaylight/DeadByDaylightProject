#pragma once
#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaBonusACEventTemplate.generated.h"

class UUMGAtlCurrencyStorefrontWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaBonusACEventTemplate : public UUMGAtlantaBaseEventsTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UUMGAtlCurrencyStorefrontWidget* currencyStorefrontWidget;
    
    UPROPERTY(EditAnywhere)
    FString LastPackSmallIconPath;
    
    UPROPERTY(EditAnywhere)
    float InitialSize;
    
    UPROPERTY(EditAnywhere)
    float AugmentedSize;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumberOfPacksToShowBigger;
    
public:
    UUMGAtlantaBonusACEventTemplate();
};

