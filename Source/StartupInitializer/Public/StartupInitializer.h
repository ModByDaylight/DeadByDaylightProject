#pragma once
#include "CoreMinimal.h"
#include "StartupInitializerInterface.h"
#include "UObject/Object.h"
#include "StartupInitializer.generated.h"

UCLASS()
class STARTUPINITIALIZER_API UStartupInitializer : public UObject, public IStartupInitializerInterface {
    GENERATED_BODY()
public:
    UStartupInitializer();
};

