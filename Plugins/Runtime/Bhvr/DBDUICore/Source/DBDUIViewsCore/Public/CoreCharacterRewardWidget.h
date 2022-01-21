#pragma once
#include "CoreMinimal.h"
#include "CoreRewardWidget.h"
#include "CharacterRewardViewData.h"
#include "CoreCharacterRewardWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCharacterRewardWidget : public UCoreRewardWidget {
    GENERATED_BODY()
public:
    UCoreCharacterRewardWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FCharacterRewardViewData& characterRewardViewData);
    
};

