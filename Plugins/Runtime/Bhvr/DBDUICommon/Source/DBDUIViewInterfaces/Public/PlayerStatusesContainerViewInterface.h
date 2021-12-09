#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerStatusesContainerViewInterface.generated.h"

class UPlayerStatusViewInterface;
class IPlayerStatusViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerStatusesContainerViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerStatusesContainerViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IPlayerStatusViewInterface> GetPlayerStatusInterface(int32 index);
    
};

