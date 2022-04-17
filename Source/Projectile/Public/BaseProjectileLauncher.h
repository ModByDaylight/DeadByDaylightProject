#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "LaunchInfo.h"
#include "ImpactInfo.h"
#include "UObject/NoExportTypes.h"
#include "BaseProjectileLauncher.generated.h"

class UBaseProjectileReplicationComponent;
class ABaseProjectile;
class UProjectileProvider;
class IProjectileProvider;
class APawn;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class PROJECTILE_API UBaseProjectileLauncher : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool _requireLaunchImpactDetection;
    
    UPROPERTY(EditDefaultsOnly)
    bool _hasInfiniteAmmunition;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseProjectile> ProjectileClass;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_Ammo)
    int32 _ammo;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_MaxAmmo)
    int32 _maxAmmo;
    
    UPROPERTY(Replicated)
    bool _canLaunchWhileOutOfAmmo;
    
    UPROPERTY(Transient)
    ABaseProjectile* _debugProjectile;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBaseProjectileReplicationComponent* _projectileReplicationComponent;
    
public:
    UBaseProjectileLauncher();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetProjectileVar(FName varName, float value);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileProvider(TScriptInterface<IProjectileProvider> projectileProvider);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LaunchWithImpact(const FLaunchInfo& launchInfo, const FImpactInfo& impactInfo, ABaseProjectile* projectile);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Launch(const FLaunchInfo& launchInfo, ABaseProjectile* projectile);
    
protected:
    UFUNCTION()
    void OnRep_MaxAmmo(int32 oldMaxAmmo);
    
    UFUNCTION()
    void OnRep_Ammo(int32 oldAmmo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunch(FLaunchInfo launchInfo, ABaseProjectile* projectile);
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_Launch();
    
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAmmoFull() const;
    
    UFUNCTION(BlueprintPure)
    bool HasProjectile() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool HasAuthority() const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    ABaseProjectile* GetProjectileToLaunch() const;
    
protected:
    UFUNCTION(BlueprintPure)
    APawn* GetOwningPawn() const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetLaunchSpeed() const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetLaunchPosition() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetLaunchDirectionAtViewAndThrowPowerRatio(FRotator viewRotation, float throwPowerRatio) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetLaunchDirection() const;
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetAmmo() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnOutOfAmmo();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetMaxAmmo(int32 newMaxAmmo, bool isMaxAmmoImmutable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ReturnAmmoUnits(int32 amountOfAmmoUnitsReturned);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Reload();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_Launch();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddMaxAmmo(int32 ammoToAdd);
    
};

