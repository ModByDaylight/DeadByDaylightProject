#pragma once
#include "CoreMinimal.h"
#include "Activatable.h"
#include "Components/ActorComponent.h"
#include "ActivatableMock.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ACTIVATION_API UActivatableMock : public UActorComponent, public IActivatable {
    GENERATED_BODY()
public:
    UActivatableMock();
    
    // Fix for true pure virtual functions not being implemented
};

