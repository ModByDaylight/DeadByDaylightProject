#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemBundleViewData.h"
#include "ItemBundleViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UItemBundleViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IItemBundleViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const FItemBundleViewData& itemBundleViewData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

