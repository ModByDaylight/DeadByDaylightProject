#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K25SurvivorChainAttachmentData.h"
#include "K25SurvivorChainAttachmentAnchor.generated.h"

class AK25Chain;
class ACamperPlayer;

UCLASS()
class AK25SurvivorChainAttachmentAnchor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _chainMaxBreakingLength;
    
private:
    UPROPERTY(EditAnywhere)
    float _timeBetweenTrace;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AttachmentData)
    FK25SurvivorChainAttachmentData _attachmentData;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ACamperPlayer> _owningSurvivor;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AK25Chain> _attachedChain;
    
    UPROPERTY(Transient)
    FVector _cachedPullDirection;
    
public:
    AK25SurvivorChainAttachmentAnchor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_AttachmentData();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfChainsAttached() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetChainsPullLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetChainsPullDirection() const;
    
    UFUNCTION(BlueprintPure)
    float GetChainPullDirectionAngle() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetChainAttachmentLocation() const;
    
    UFUNCTION(BlueprintPure)
    FK25SurvivorChainAttachmentData GetChainAttachmentData() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnChainDetached(AK25Chain* chainToDetach);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnChainAttached(AK25Chain* chainToAttach);
    
};

