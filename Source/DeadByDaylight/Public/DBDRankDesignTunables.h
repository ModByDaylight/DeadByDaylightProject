#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDRankDesignTunables.generated.h"

class UCurveFloat;

UCLASS(BlueprintType, Config=Design)
class DEADBYDAYLIGHT_API UDBDRankDesignTunables : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* UnbrokenTimeAlivePointsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* EvaderStealthPointsByDistanceWhileKillerNotChasingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* EvaderStealthPointsByDistanceWhileKillerIsChasingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* EvaderChasePointsByDurationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* EvaderZAxisDistanceScalingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ChaserChasePointsByDurationCurve;
    
    UDBDRankDesignTunables();
};

