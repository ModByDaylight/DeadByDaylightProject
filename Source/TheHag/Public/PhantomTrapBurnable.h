#pragma once
#include "CoreMinimal.h"
#include "LightBurnable.h"
#include "PhantomTrapBurnable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEHAG_API UPhantomTrapBurnable : public ULightBurnable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _traceZOffset;
    
public:
    UPhantomTrapBurnable();
};

