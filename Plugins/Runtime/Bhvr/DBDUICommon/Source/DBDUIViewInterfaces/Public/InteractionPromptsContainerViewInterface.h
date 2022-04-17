#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionPromptViewData.h"
#include "InteractionPromptsContainerViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UInteractionPromptsContainerViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IInteractionPromptsContainerViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemovePrompt(FName id);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAllPrompts();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddPrompt(const FInteractionPromptViewData& data);
    
};

