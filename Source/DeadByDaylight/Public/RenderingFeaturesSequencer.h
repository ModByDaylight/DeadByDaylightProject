#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RenderingFeaturesSequencer.generated.h"

class ADBDAggregateCullDistanceVolumes;
class UWorld;

UCLASS()
class DEADBYDAYLIGHT_API URenderingFeaturesSequencer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDAggregateCullDistanceVolumes* _aggregateCullDistanceVolumes;
    
    UPROPERTY(Transient)
    UWorld* _world;
    
public:
    URenderingFeaturesSequencer();
};

