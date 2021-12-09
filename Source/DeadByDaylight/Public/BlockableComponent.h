#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockableReplicatedDatum.h"
#include "BlockableComponent.generated.h"

class UObject;
class UBlockElement;
class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UBlockableComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedDatum)
    FBlockableReplicatedDatum _replicatedDatum;
    
    UPROPERTY(Transient)
    TSet<UBlockElement*> _blockElements;
    
    UFUNCTION()
    void OnRep_ReplicatedDatum();
    
public:
    UFUNCTION(BlueprintCallable)
    void Authority_RemoveBlock(const UObject* source);
    
    UFUNCTION(BlueprintCallable)
    void Authority_AddTimedBlock(const UObject* source, const float duration, const TSet<ADBDPlayer*>& affectedPlayers);
    
    UFUNCTION(BlueprintCallable)
    void Authority_AddBlock(const UObject* source, const TSet<ADBDPlayer*>& affectedPlayers);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UBlockableComponent();
};

