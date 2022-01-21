#pragma once
#include "CoreMinimal.h"
#include "CorePlayerStatusKillerEffectWidget.h"
#include "CorePlayerStatusKillerEffectK07Widget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerStatusKillerEffectK07Widget : public UCorePlayerStatusKillerEffectWidget {
    GENERATED_BODY()
public:
    UCorePlayerStatusKillerEffectK07Widget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfflictionHit();
    
};

