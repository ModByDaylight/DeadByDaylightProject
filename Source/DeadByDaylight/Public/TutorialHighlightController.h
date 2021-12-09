#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHudComponent.h"
#include "TutorialHighlightController.generated.h"

UCLASS(BlueprintType)
class UTutorialHighlightController : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetHudComponentHighlight(EHudComponent hudComponent, bool show);
    
    UTutorialHighlightController();
};

