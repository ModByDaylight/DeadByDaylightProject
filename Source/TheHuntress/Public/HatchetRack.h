#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HatchetRack.generated.h"

UCLASS()
class AHatchetRack : public AActor {
    GENERATED_BODY()
public:
    AHatchetRack();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMovableHatchetVisibility(bool visible);
    
};

