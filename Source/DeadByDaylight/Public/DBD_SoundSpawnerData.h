#pragma once
#include "CoreMinimal.h"
#include "DBD_SoundSpawnerData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDBD_SoundSpawnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<UObject>> TriggerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TriggerVisualForCamper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TriggerVisualForSlasher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> ActorToSpawnVisual;
    
    DEADBYDAYLIGHT_API FDBD_SoundSpawnerData();
};

