#pragma once
#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CoreRewardWidget.generated.h"

class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreRewardWidget : public UCoreButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDImage* RewardIcon;
    
public:
    UCoreRewardWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearData();
    
};

