#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HudObjectiveViewData.h"
#include "HudObjectiveViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHudObjectiveViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHudObjectiveViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHudObjectivePosition(bool isHookCountDisplayed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHudObjectiveData(const FHudObjectiveViewData& hudObjectiveViewData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentHudObjectiveHighlight(bool highlight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

