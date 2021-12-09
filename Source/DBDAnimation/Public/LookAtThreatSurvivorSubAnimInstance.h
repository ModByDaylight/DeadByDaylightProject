#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "LookAtThreatSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API ULookAtThreatSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _maxDistanceForThreatDetection;
    
    UPROPERTY(EditDefaultsOnly)
    FName _headSocket;
    
    UPROPERTY(EditDefaultsOnly)
    FName _rootSocket;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _yawToThreat;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _pitchToThreat;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isVisibleThreat;
    
public:
    ULookAtThreatSurvivorSubAnimInstance();
};

