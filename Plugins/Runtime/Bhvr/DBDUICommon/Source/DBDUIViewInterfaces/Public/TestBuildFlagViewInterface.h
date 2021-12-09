#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ETestBuildType.h"
#include "TestBuildFlagViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UTestBuildFlagViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ITestBuildFlagViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidget(ETestBuildType testBuildType);
    
};

