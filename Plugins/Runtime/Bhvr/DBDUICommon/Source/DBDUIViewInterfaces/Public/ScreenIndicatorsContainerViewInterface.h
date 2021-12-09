#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ScreenIndicatorViewData.h"
#include "ScreenIndicatorsContainerViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UScreenIndicatorsContainerViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IScreenIndicatorsContainerViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowDirectionIndicator(const FScreenIndicatorViewData& data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveDirectionIndicator(const FString& id);
    
};

