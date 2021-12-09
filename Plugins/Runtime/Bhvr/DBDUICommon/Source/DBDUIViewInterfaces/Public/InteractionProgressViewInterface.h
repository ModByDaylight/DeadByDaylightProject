#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionProgressViewData.h"
#include "InteractionProgressViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UInteractionProgressViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IInteractionProgressViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputProgress(const float progress, const float itemCharge);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInputProgressPrompt(const FInteractionProgressViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideInputProgressPrompt();
    
};

