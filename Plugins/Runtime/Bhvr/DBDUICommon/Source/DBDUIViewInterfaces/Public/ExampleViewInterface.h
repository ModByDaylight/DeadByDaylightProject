#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ExampleViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UExampleViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IExampleViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetExampleText(const FString& text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetExampleProgressRatio(float ratio);
    
};

