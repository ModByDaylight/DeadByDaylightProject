#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StartSequenceViewData.h"
#include "StartSequenceViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStartSequenceViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStartSequenceViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowStartSequence(const FStartSequenceViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideStartSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsStartSequenceVisible() const;
    
};

