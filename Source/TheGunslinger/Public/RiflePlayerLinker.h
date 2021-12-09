#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "RiflePlayerLinker.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRiflePlayerLinkerOnLinkedPlayerSet, ADBDPlayer*, linkedPlayer);

UCLASS(BlueprintType)
class THEGUNSLINGER_API URiflePlayerLinker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRiflePlayerLinkerOnLinkedPlayerSet OnLinkedPlayerSet;
    
private:
    UPROPERTY(Transient)
    ADBDPlayer* _linkedPlayer;
    
    UPROPERTY(Transient)
    ADBDPlayer* _linkedPlayerDuringAttack;
    
    UPROPERTY(Transient)
    ADBDPlayer* _linkOwner;
    
    UPROPERTY(Replicated)
    float _desiredLinkLength;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _elasticLength;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _minimumLinkLength;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _breakFreeCloseRangeMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float _movementLinkReductionThreshold;
    
    UPROPERTY(EditAnywhere)
    float _movementAccelerationTreshold;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnClientConfirmTensionBreakChain(ADBDPlayer* player);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Unlink();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Link(ADBDPlayer* linkedPlayer);
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetLinkOwner() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetLinkedPlayer() const;
    
private:
    UFUNCTION(Client, Reliable)
    void Client_OnAuthorityTensionBreakChain(ADBDPlayer* player);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    URiflePlayerLinker();
};

