#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "GhostStalkedComponent.generated.h"

class ACharacter;
class UStalkedComponent;
class UStatusEffect;
class UTimerObject;
class ASlasherPlayer;
class UCharacterSightComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGhostStalkedComponentOnIsMarkedChanged, bool, isMarked);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGhostStalkedComponentOnIsSpottingKillerChanged, bool, isSpotting);

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UGhostStalkedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGhostStalkedComponentOnIsMarkedChanged OnIsMarkedChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGhostStalkedComponentOnIsSpottingKillerChanged OnIsSpottingKillerChanged;
    
private:
    UPROPERTY(Replicated, Transient)
    FTagStateBool _isMarked;
    
    UPROPERTY(Export, Replicated, Transient)
    UStatusEffect* _ghostKillerInstinctEffect;
    
    UPROPERTY(Export, Transient)
    UTimerObject* _markTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    ASlasherPlayer* _killer;
    
    UPROPERTY(Export, Transient)
    UStalkedComponent* _stalkedComponent;
    
    UFUNCTION()
    void OnKillerStealthChanged(bool isStealth);
    
    UFUNCTION()
    void OnCharacterSightChanged(ACharacter* character, UCharacterSightComponent* sightComponent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Local_OnSpotKiller();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMarked() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Initialize(ASlasherPlayer* killer);
    
public:
    UFUNCTION(Client, Unreliable)
    void Client_OnSpotKiller();
    
private:
    UFUNCTION()
    void Authority_OnStalkedChargeFull(bool completed, const TArray<AActor*>& instigatorsForCompletion);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGhostStalkedComponent();
};

