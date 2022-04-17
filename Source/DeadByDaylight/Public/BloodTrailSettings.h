#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BHVRPerDetailModeInt -FallbackName=BHVRPerDetailModeInt
#include "BloodTrailSettings.generated.h"

class UBloodDecalEffect;

UCLASS()
class UBloodTrailSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float _initialDelay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _numBloodDropsPerBloodPool;
    
    UPROPERTY(EditDefaultsOnly)
    float _bloodDropsInterval;
    
    UPROPERTY(EditDefaultsOnly)
    bool _randomlyRotateBloodDrops;
    
    UPROPERTY(EditDefaultsOnly)
    float _bloodDropsRandomScatter;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETraceTypeQuery> _bloodTraceChannel;
    
    UPROPERTY(EditDefaultsOnly)
    UBloodDecalEffect* _bloodDecalEffect;
    
    //UPROPERTY(EditDefaultsOnly)
    //FBHVRPerDetailModeInt _decalPoolSize;
    
    UPROPERTY(EditAnywhere)
    float _recycleThresholdPercentage;
    
    UPROPERTY(EditAnywhere)
    float _recycleDistancePercentage;
    
    //UPROPERTY(EditDefaultsOnly)
    //FBHVRPerDetailModeInt _maxOverlapping;
    
    UBloodTrailSettings();
};

