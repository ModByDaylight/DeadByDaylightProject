#pragma once
#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaCalendarEventsTemplate.generated.h"

class UUMGAtlantaDailyRewardsGrid;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaCalendarEventsTemplate : public UUMGAtlantaBaseEventsTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAtlantaDailyRewardsGrid* DailyRewardGrid;
    
public:
    UUMGAtlantaCalendarEventsTemplate();
};

