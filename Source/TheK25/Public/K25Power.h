#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Collectable.h"
#include "CustomKillerInstinctData.h"
#include "K25Power.generated.h"

class AK25Gateway;
class UChargeableComponent;
class UK25SurvivorChainAttachmentComponent;
class AK25ControlledProjectile;
class UK25SurvivorChainTargetterComponent;
class ALamentConfiguration;
class AK25Husk;
class UK25KillerTeleportationPositionFinderComponent;
class AK25AnimationFollowerActor;
class UDataTable;
class UAuthoritativePoolProjectileProviderAdapter;
class UK25ProjectileLauncher;
class ASlasherPlayer;
class UAuthoritativeActorPoolComponent;
class UPowerChargeComponent;
class UK25PowerChargePresentationItemProgressComponent;
class UK25ChainAttachmentReplicationComponent;
class ACamperPlayer;

UCLASS()
class AK25Power : public ACollectable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UChargeableComponent* _k25ChainStrikeInteractionChargeableComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UChargeableComponent* _k25TeleportChargeableComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCustomKillerInstinctData> _customKillerInstinctDatas;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> _survivorStatusEffectID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> _killerStatusEffectID;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UK25SurvivorChainAttachmentComponent> _survivorChainAttachmentComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UK25SurvivorChainTargetterComponent> _survivorChainTargetterComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AK25Gateway> _k25GatewayClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AK25ControlledProjectile> _controlledProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ALamentConfiguration> _lamentConfigurationClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AK25Husk> _k25HuskClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UK25KillerTeleportationPositionFinderComponent> _killerTeleportFinderComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AK25AnimationFollowerActor> _chainAnimationActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> _chainAnimationMappingsTables;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AK25AnimationFollowerActor> _pillarAnimationActorClass;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    UK25ProjectileLauncher* _k25ProjectileLauncher;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAuthoritativeActorPoolComponent* _k25ProjectilePool;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAuthoritativeActorPoolComponent* _k25ChainPool;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPowerChargeComponent* _k25PowerChargeComponent;
    
    UPROPERTY()
    UAuthoritativePoolProjectileProviderAdapter* _k25ProjectileProvider;
    
    UPROPERTY(Export, VisibleAnywhere)
    UK25PowerChargePresentationItemProgressComponent* _k25PowerPresentationItemProgressComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_K25Gateway)
    AK25Gateway* _gateway;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_K25ControlledProjectile)
    AK25ControlledProjectile* _controlledProjectileInstance;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LamentConfiguration)
    ALamentConfiguration* _lamentConfiguration;
    
    UPROPERTY(Transient)
    AK25Husk* _k25Husk;
    
    UPROPERTY(Export, VisibleAnywhere)
    UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent;
    
    UPROPERTY(Replicated)
    bool _isPowerCharged;
    
public:
    AK25Power();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnSurvivorAdded(ACamperPlayer* survivor, ASlasherPlayer* killer);
    
    UFUNCTION()
    void OnRep_LamentConfiguration();
    
    UFUNCTION()
    void OnRep_K25Gateway();
    
    UFUNCTION()
    void OnRep_K25ControlledProjectile();
    
    UFUNCTION()
    void OnKillerAdded(ASlasherPlayer* killer);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnKillerInterruptSFX(ASlasherPlayer* killer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnKillerInterruptOpenHatchSFX(ASlasherPlayer* killer);
    
};

