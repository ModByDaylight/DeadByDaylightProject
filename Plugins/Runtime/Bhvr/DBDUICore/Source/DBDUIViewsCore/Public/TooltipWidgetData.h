#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETooltipType.h"
#include "DBDTableRowBase.h"
#include "TooltipWidgetData.generated.h"

class UUserWidget;

USTRUCT()
struct FTooltipWidgetData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETooltipType TooltipType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WidgetClass;
    
    DBDUIVIEWSCORE_API FTooltipWidgetData();
};

