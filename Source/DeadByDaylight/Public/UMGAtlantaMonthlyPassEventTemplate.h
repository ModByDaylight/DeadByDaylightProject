#pragma once
#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaMonthlyPassEventTemplate.generated.h"

class UUMGSubscriptionPackButtonWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaMonthlyPassEventTemplate : public UUMGAtlantaBaseEventsTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UUMGSubscriptionPackButtonWidget* MonthlyPassWidget;
    
public:
    UUMGAtlantaMonthlyPassEventTemplate();
};

