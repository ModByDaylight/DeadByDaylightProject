#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnlineTransactionServiceComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ONLINETRANSACTIONS_API UOnlineTransactionServiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOnlineTransactionServiceComponent();
};

