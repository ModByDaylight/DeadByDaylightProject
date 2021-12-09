#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHudComponent.h"
#include "TutorialHighlightViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UTutorialHighlightViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ITutorialHighlightViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTutorialHighlight(const bool show, const EHudComponent& componentId);
    
};

