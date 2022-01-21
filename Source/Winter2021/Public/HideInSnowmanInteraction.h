#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "HideInSnowmanInteraction.generated.h"

class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHideInSnowmanInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    bool _shouldRunOutOfSnowman;
    
    UPROPERTY(Replicated, Transient)
    bool _isSnowmanShieldDamaged;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _timeToEnterSnowman;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _minimumTimeToRunAndExit;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _cameraZoomBack;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _timeToZoomEnter;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _timeToZoomExit;
    
public:
    UHideInSnowmanInteraction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StopControllingSnowman(ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartControllingSnowman(ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnAbleToRunAndExitSnowmanStart();
    
};

