#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AddonViewData.h"
#include "AddonViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UAddonViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IAddonViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const FAddonViewData& baseLoadoutPartViewData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

