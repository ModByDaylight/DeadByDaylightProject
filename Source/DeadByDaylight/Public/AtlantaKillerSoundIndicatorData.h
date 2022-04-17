#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaKillerSoundConditionData.h"
#include "AtlantaKillerSoundIndicatorData.generated.h"

USTRUCT()
struct FAtlantaKillerSoundIndicatorData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRadiusSoundDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxRadiusSoundDistance;
    
    UPROPERTY(EditAnywhere)
    float MinRangeSoundHeard;
    
    UPROPERTY(EditAnywhere)
    bool CanBeGlobalSound;
    
    UPROPERTY(EditAnywhere)
    bool CanDiminishWithDistance;
    
    UPROPERTY(EditAnywhere)
    TArray<FAtlantaKillerSoundConditionData> GlobalSoundConditions;
    
    UPROPERTY(EditAnywhere)
    TArray<FAtlantaKillerSoundConditionData> DiminishWithDistanceConditions;
    
    DEADBYDAYLIGHT_API FAtlantaKillerSoundIndicatorData();
};

