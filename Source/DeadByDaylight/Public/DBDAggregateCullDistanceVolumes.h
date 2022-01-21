#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDAggregateCullDistanceVolumes.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDAggregateCullDistanceVolumes : public AActor {
    GENERATED_BODY()
public:
    ADBDAggregateCullDistanceVolumes();
    UFUNCTION()
    void SpawnCullDistanceVolumes();
    
};

