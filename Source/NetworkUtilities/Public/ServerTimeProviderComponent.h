#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ServerTimeProviderComponent.generated.h"

UCLASS()
class NETWORKUTILITIES_API UServerTimeProviderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UServerTimeProviderComponent();
};

