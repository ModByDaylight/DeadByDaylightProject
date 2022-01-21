#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestInterface.h"
#include "TestActorImplementingTestInterface.generated.h"

UCLASS()
class UNITTESTUTILITIES_API ATestActorImplementingTestInterface : public AActor, public ITestInterface {
    GENERATED_BODY()
public:
    ATestActorImplementingTestInterface();
    
    // Fix for true pure virtual functions not being implemented
};

