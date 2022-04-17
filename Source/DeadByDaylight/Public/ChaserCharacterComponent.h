#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ChaseUpdateInfo.h"
#include "ChaseComponent.h"
#include "ChaserCharacterComponent.generated.h"

class UDBDPawnSensingComponent;
class ADBDPlayer;
class ACamperPlayer;
class APawn;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChaserCharacterComponent : public UChaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UDBDPawnSensingComponent* _camperSensor;
    
    UPROPERTY(Transient)
    TMap<ADBDPlayer*, FChaseUpdateInfo> _chaseUpdateInfo;
    
    UPROPERTY(Replicated, Transient)
    TArray<ADBDPlayer*> _chasedPlayers;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _authority_survivorsWhoStunnedKillerByPalletDuringChase;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _preventChaseTags;
    
public:
    UChaserCharacterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnKillerLocallyObservedChanged(bool locallyObserved);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnChaseStart(ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnChaseEnd(ACamperPlayer* survivor, const FChaseUpdateInfo chaseUpdateInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnAllChaseEnd();
    
    UFUNCTION()
    void Authority_OnChaseTargetFound(APawn* pawn);
    
};

