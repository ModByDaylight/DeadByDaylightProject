#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PerksContainerViewInterface.generated.h"

class UPerkViewInterface;
class IPerkViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPerksContainerViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPerksContainerViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IPerkViewInterface> GetPerkInterface(int32 index);
    
};

