#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Collectable.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "EAttackType.h"
#include "EContaminator.h"
#include "K24Power.generated.h"

class UInteractionDefinition;
class UChargeableComponent;
class UCurveFloat;
class USurvivorContaminationComponent;
class APallet;
class ABreakableBase;
class AZombieCharacter;

UCLASS()
class AK24Power : public ACollectable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerWalkSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerWalkSpeedLevel3;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _normalWalkSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerMouseYawScale;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerYawAdjustTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerGamePadYawScale;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _activateK24PowerCharge;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _activateK24PowerSecondsToCharge;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _activatePowerChargeSpeedCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _activatePowerChargeLvl3SpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UInteractionDefinition* _k24PowerCooldownInteraction;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _whipLengthLevel1;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _whipLengthLevel2;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _whipLengthLevel3;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USurvivorContaminationComponent> _contaminationComponentBP;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _powerChargeSurvivorContaminatedPoint;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _powerChargeZombieKilledPoint;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _powerChargeSurvivorHitPoint;
    
    UPROPERTY(ReplicatedUsing=OnRep_PowerLevelPoints)
    float _powerLevelPoints;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerLevelPointsToLevel2;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _powerLevelPointsToLevel3;
    
public:
    AK24Power();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void WhipAttackStart_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void WhipAttackMove_Cosmetic(FVector whipStartLocation, FVector whipEndLocation, bool isFirstRayCast);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void WhipAttackHit_Cosmetic(FVector whipStartLocation, FVector impactPointLocation, FVector whipEndLocation, bool isFirstHit, FVector impactNormal, const FName phyMaterial, bool hitACharacter);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void WhipAttackEnd_Cosmetic();
    
    UFUNCTION(Reliable, Server)
    void Server_PowerDestroyPallet(APallet* pallet);
    
    UFUNCTION(Reliable, Server)
    void Server_PowerDestroyBreakable(ABreakableBase* breakable);
    
    UFUNCTION(Reliable, Server)
    void Server_KillAZombie(AZombieCharacter* zombie, EAttackType attackType);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void PowerHitStateEnd_Cosmetic(FVector whipStartLocation, FVector whipEndLocation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void PowerCooldownEnd_Cosmetic();
    
private:
    UFUNCTION()
    void OnRep_PowerLevelPoints();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPowerStop_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPowerStartCharge_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPowerLevelChanged_Cosmetic(const int32 powerLevel);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PowerDestroyPallet(APallet* pallet);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PowerDestroyBreakable(ABreakableBase* breakable);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInPower() const;
    
    UFUNCTION(BlueprintPure)
    float GetWhipLength() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPowerLevel() const;
    
    UFUNCTION()
    void Authority_OnSurvivorContaminated(const EContaminator contaminator);
    
};

