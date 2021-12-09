#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StartupInitializer.h"
#include "ClientStartupInitializerInterface.h"
#include "ClientStartupInitializer.generated.h"

UCLASS()
class STARTUPINITIALIZER_API UClientStartupInitializer : public UStartupInitializer, public IClientStartupInitializerInterface {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnHealthCheckTriggered(bool requestSuccess, int32 providerError, bool datetimeIsSet, const FDateTime& utcTime);
    
public:
    UClientStartupInitializer();
};

