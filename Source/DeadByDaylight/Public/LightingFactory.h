#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LightingFactory.generated.h"

class ULightingData;

UCLASS()
class DEADBYDAYLIGHT_API ULightingFactory : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ULightingData* _data;
    
public:
    ULightingFactory();
};

