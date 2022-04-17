#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "FragileObjectComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UFragileObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFragileObjectStateChanged);
    
    UPROPERTY(BlueprintAssignable)
    FOnFragileObjectStateChanged OnObjectBroken;
    
    UPROPERTY(BlueprintAssignable)
    FOnFragileObjectStateChanged OnObjectRepaired;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Repaired)
    bool _repaired;
    
    UPROPERTY(EditDefaultsOnly)
    float _minFallingHeight;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _generalObjectBreakingEvents;
    
    UPROPERTY(Transient)
    ADBDPlayer* _previousCollector;
    
public:
    UFragileObjectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_Repaired() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRepaired() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetPreviousCollector() const;
    
private:
    UFUNCTION(Exec)
    void DBD_RepairFragileObject();
    
};

