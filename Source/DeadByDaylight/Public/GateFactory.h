#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EGateType.h"
#include "GateFactory.generated.h"

class AGate;

UCLASS()
class AGateFactory : public AActor {
    GENERATED_BODY()
public:
    AGateFactory();
    UFUNCTION(BlueprintCallable)
    AGate* GetGate(EGateType gateType);
    
};

