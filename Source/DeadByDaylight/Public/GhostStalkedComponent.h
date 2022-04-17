#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "GhostStalkedComponent.generated.h"

class ASlasherPlayer;
class UTimerObject;
class UStatusEffect;
class AActor;
class UStalkedComponent;
class ACharacter;
class UCharacterSightComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGhostStalkedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsSpottingKiller, bool, isSpotting);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsMarkedChanged, bool, isMarked);
    
    UPROPERTY(BlueprintAssignable)
    FOnIsMarkedChanged OnIsMarkedChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsSpottingKiller OnIsSpottingKillerChanged;
    
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
    
public:
    UGhostStalkedComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
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
    
};

