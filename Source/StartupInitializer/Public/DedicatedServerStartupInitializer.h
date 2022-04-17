#pragma once
#include "CoreMinimal.h"
#include "DedicatedServerStartupInitializerInterface.h"
#include "StartupInitializer.h"
#include "DedicatedServerStartupInitializer.generated.h"

class UDBDTimeUtilities;

UCLASS()
class STARTUPINITIALIZER_API UDedicatedServerStartupInitializer : public UStartupInitializer, public IDedicatedServerStartupInitializerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDTimeUtilities* _dbdTimeUtilities;
    
public:
    UDedicatedServerStartupInitializer();
    
    // Fix for true pure virtual functions not being implemented
};

