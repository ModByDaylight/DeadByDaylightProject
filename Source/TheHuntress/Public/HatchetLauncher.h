#pragma once
#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "HatchetLauncher.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHatchetLauncher : public UKillerProjectileLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator _angleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _angleOffsetCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _speedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _hatchetSpeedWhenThrowFullyCharged;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _hatchetPitchCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchetMinAngleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchetMaxAngleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchetMinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchetMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchetLaunchPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchetLaunchPitchMax;
    
public:
    UHatchetLauncher();
protected:
    UFUNCTION(BlueprintPure)
    bool IsLaunchedHatchetFullyCharged() const;
    
};

