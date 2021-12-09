#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gate.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API AGate : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> InteractionInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionOutput;
    
    AGate();
};

