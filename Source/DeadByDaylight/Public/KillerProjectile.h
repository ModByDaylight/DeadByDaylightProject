#pragma once
#include "CoreMinimal.h"
#include "PhysicsBasedProjectile.h"
#include "EHitValidatorConfigName.h"
#include "GameplayTagContainer.h"
#include "KillerProjectile.generated.h"

class UHitValidatorConfigurator;
class ASlasherPlayer;
class UHitValidatorComponent;
class UPrimitiveComponent;

UCLASS()
class DEADBYDAYLIGHT_API AKillerProjectile : public APhysicsBasedProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag _killerProjectileAttemptGameEventTag;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    UHitValidatorConfigurator* _hitValidatorConfigurator;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHitValidatorComponent* _hitValidatorComponent;
    
    UPROPERTY(EditAnywhere)
    EHitValidatorConfigName _hitValidationConfigName;
    
public:
    AKillerProjectile();
    UFUNCTION(BlueprintCallable)
    void SetActiveSlashable(bool active);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    UPrimitiveComponent* GetPlayerPrimitiveComponent() const;
    
public:
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetLaunchingKiller() const;
    
};

