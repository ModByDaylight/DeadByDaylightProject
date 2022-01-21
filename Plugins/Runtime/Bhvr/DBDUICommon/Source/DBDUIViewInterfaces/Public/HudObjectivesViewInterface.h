#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HudObjectivesViewData.h"
#include "HudObjectivesViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHudObjectivesViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHudObjectivesViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHudObjectiveData(const FHudObjectivesViewData& hudObjectiveViewData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHookCountVisibility(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHookCountData(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearHookCountData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

