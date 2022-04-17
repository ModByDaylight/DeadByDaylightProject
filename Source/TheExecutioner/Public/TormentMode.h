#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Collectable.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "TormentMode.generated.h"

class UTormentTrailDetectorComponent;
class UChargeableComponent;
class UPowerChargeComponent;
class UPowerToggleComponent;
class AMobileTormentTrailRenderer;
class UPowerChargePresentationItemProgressComponent;
class UAuthoritativeActorPoolComponent;
class UTormentTrailSpawnerComponent;
class UTormentTrailPointCollectionComponent;
class UAgonyComponent;
class UTormentModeCooldownInteraction;
class UCurveFloat;

UCLASS()
class THEEXECUTIONER_API ATormentMode : public ACollectable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _activateTormentModeCharge;
    
    UPROPERTY(Export)
    UPowerChargeComponent* _tormentModeCharge;
    
    UPROPERTY(Export)
    UPowerChargePresentationItemProgressComponent* _tormentModeChargePresentation;
    
    UPROPERTY(Export)
    UPowerToggleComponent* _powerToggleComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTormentTrailSpawnerComponent* _tormentTrailSpawnerComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAuthoritativeActorPoolComponent* _tormentTrailControllerPool;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAuthoritativeActorPoolComponent* _tormentAttackTrailControllerPool;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAuthoritativeActorPoolComponent* _restrictedTormentTrailControllerPool;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAuthoritativeActorPoolComponent* _tormentTrailPointPool;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAuthoritativeActorPoolComponent* _restrictedTormentTrailPointPool;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _activateTormentModeSecondsToCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentModeMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _tormentModeChargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _tormentModeDischargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentModePauseChargeRate;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _tormentModeAttackConsumePower;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _tormentModeMinimumPercentToActivate;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentModeMouseYawScale;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentModeYawAdjustTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentModeGamePadYawScale;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _tormentModeYawInputLimit;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentModeNotMovingYawScaleMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentModeNotMovingYawAdjustTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tormentModeWalkSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _normalWalkSpeed;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _tormentModeForcedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAgonyComponent> _agonyComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTormentTrailDetectorComponent> _killerTormentTrailDetectorClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTormentTrailDetectorComponent> _survivorTormentTrailDetectorClass;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UTormentModeCooldownInteraction* _tormentModeCooldownInteraction;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _tormentModeChargeSpeedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AMobileTormentTrailRenderer> _mobileTormentTrailRendererClass;
    
public:
    ATormentMode();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestMoreActorInAttackPool();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTormentModeStop_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTormentModeStart_Cosmetic();
    
private:
    UFUNCTION()
    void OnTormentModeChargeEmpty();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInTormentMode() const;
    
};

