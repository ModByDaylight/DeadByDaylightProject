#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicGrass.generated.h"

class UMaterialParameterCollection;

UCLASS()
class ADynamicGrass : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* _worldSettings;
    
public:
    ADynamicGrass();
};

