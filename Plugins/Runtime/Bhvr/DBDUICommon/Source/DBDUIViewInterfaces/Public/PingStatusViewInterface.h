#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPingQuality.h"
#include "PingStatusViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPingStatusViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPingStatusViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const EPingQuality& pingQuality);
    
};

