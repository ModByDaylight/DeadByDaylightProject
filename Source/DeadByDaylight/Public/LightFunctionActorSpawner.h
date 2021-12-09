#pragma once
#include "CoreMinimal.h"
#include "ActorSpawner.h"
#include "LightFunctionActorSpawner.generated.h"

class UTexture;

UCLASS()
class ULightFunctionActorSpawner : public UActorSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* LightFunctionTexture;
    
public:
    ULightFunctionActorSpawner();
};

