#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "TricksterSuperModeComponent.generated.h"

UCLASS()
class UTricksterSuperModeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRepIsInSuperMode)
    bool _isInSuperMode;
    
    UPROPERTY(ReplicatedUsing=OnRepIsSuperModeReady)
    bool _isSuperModeReady;
    
    UPROPERTY(ReplicatedUsing=OnRepIsInCooldown)
    bool _isInCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _chargesToAddOnKnifeHit;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _superModeMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _superModeReadyDepletionPerSecond;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _superModeActiveDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _superModeCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _shouldDisableFlurryDuringCooldown;
    
    UFUNCTION()
    void OnRepIsSuperModeReady();
    
    UFUNCTION()
    void OnRepIsInSuperMode();
    
    UFUNCTION()
    void OnRepIsInCooldown();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTricksterSuperModeComponent();
};

