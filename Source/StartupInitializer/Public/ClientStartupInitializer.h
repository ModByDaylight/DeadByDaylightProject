#pragma once
#include "CoreMinimal.h"
#include "StartupInitializer.h"
#include "ClientStartupInitializerInterface.h"
#include "UObject/NoExportTypes.h"
#include "ClientStartupInitializer.generated.h"

UCLASS()
class STARTUPINITIALIZER_API UClientStartupInitializer : public UStartupInitializer, public IClientStartupInitializerInterface {
    GENERATED_BODY()
public:
    UClientStartupInitializer();
private:
    UFUNCTION()
    void OnHealthCheckTriggered(bool requestSuccess, int32 providerError, bool datetimeIsSet, const FDateTime& utcTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

