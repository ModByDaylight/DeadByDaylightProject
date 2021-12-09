#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Activatable.h"
#include "ActivatableMock.generated.h"

UCLASS()
class ACTIVATION_API UActivatableMock : public UActorComponent, public IActivatable {
    GENERATED_BODY()
public:
    UActivatableMock();
};

