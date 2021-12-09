#pragma once
#include "CoreMinimal.h"
#include "TestInterface.h"
#include "Components/ActorComponent.h"
#include "TestActorComponentImplementingTestInterface.generated.h"

UCLASS(HideDropdown, NotPlaceable)
class UNITTESTUTILITIES_API UTestActorComponentImplementingTestInterface : public UActorComponent, public ITestInterface {
    GENERATED_BODY()
public:
    UTestActorComponentImplementingTestInterface();
};

