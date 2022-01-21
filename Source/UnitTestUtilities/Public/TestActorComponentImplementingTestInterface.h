#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestInterface.h"
#include "TestActorComponentImplementingTestInterface.generated.h"

UCLASS(HideDropdown, NotPlaceable, meta=(BlueprintSpawnableComponent))
class UNITTESTUTILITIES_API UTestActorComponentImplementingTestInterface : public UActorComponent, public ITestInterface {
    GENERATED_BODY()
public:
    UTestActorComponentImplementingTestInterface();
    
    // Fix for true pure virtual functions not being implemented
};

