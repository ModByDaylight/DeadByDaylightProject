#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemBundleViewData.h"
#include "ItemInteractionViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UItemInteractionViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IItemInteractionViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const FItemBundleViewData& itemBundleData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

