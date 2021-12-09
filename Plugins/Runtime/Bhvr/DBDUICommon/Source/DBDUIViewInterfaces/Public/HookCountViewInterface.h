#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HookCountViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHookCountViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHookCountViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHookCountVisibility(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

