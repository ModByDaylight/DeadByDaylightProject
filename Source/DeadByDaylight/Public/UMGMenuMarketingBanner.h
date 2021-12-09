#pragma once
#include "CoreMinimal.h"
#include "UMGMenuBaseBanner.h"
#include "UMGMenuMarketingBanner.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGMenuMarketingBanner : public UUMGMenuBaseBanner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* SubTitle;
    
public:
    UUMGMenuMarketingBanner();
};

