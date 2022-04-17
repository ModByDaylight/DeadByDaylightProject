#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ETotemState.h"
#include "TotemBoundPerk.generated.h"

class ATotem;
class AActor;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTotemBoundPerk : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ETotemState TotemBoundState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool _doNotBindToTotemOnInit;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_BoundTotems)
    TArray<ATotem*> _boundTotems;
    
    UPROPERTY(Transient)
    TArray<ATotem*> _local_boundTotems;
    
    UPROPERTY(Transient)
    TArray<ATotem*> _authorityPrevTotemActors;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 _numTotemsToBind;
    
public:
    UTotemBoundPerk();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_BoundTotems();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<ATotem*> GetTotems() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceToOwner(const AActor* otherActor) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ATotem*> GetBoundTotems() const;
    
    UFUNCTION(BlueprintCallable)
    void Authority_UnbindFromTotem(ATotem* aTotemActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Authority_BindToDullTotems(bool allowAdditionalBoundTotems);
    
};

