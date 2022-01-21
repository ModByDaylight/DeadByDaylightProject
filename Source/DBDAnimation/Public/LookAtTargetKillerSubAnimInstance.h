#pragma once
#include "CoreMinimal.h"
#include "BaseKillerAnimInstance.h"
#include "LookAtTargetKillerSubAnimInstance.generated.h"

class ADBDPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API ULookAtTargetKillerSubAnimInstance : public UBaseKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _maxDistanceForTargetDetection;
    
    UPROPERTY(EditDefaultsOnly)
    FName _headSocket;
    
    UPROPERTY(EditDefaultsOnly)
    FName _rootSocket;
    
    UPROPERTY(EditDefaultsOnly)
    float _preferredMinLookAtTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _distanceScoreFactor;
    
    UPROPERTY(EditDefaultsOnly)
    float _angleScoreFactor;
    
    UPROPERTY(EditDefaultsOnly)
    float _sameTargetScoreFactor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _yawToTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _pitchToTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasVisibleTarget;
    
public:
    ULookAtTargetKillerSubAnimInstance();
private:
    UFUNCTION()
    void OnChaseStarted(ADBDPlayer* target);
    
    UFUNCTION()
    void OnChaseEnded(ADBDPlayer* target, float chaseTime);
    
};

