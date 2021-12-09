#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaKillerSoundDistanceData.generated.h"

USTRUCT()
struct FAtlantaKillerSoundDistanceData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRadiusSoundDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxRadiusSoundDistance;
    
    UPROPERTY(EditAnywhere)
    float MinRangeSoundHeard;
    
    DEADBYDAYLIGHT_API FAtlantaKillerSoundDistanceData();
};

