#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StartupInitializerInterface.h"
#include "StartupInitializer.generated.h"

UCLASS()
class STARTUPINITIALIZER_API UStartupInitializer : public UObject, public IStartupInitializerInterface {
    GENERATED_BODY()
public:
    UStartupInitializer();
    
    // Fix for true pure virtual functions not being implemented
};

