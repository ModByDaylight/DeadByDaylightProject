#pragma once
#include "CoreMinimal.h"
#include "PhysicsBasedProjectile.h"
#include "GameplayTagContainer.h"
#include "EHitValidatorConfigName.h"
#include "KillerProjectile.generated.h"

class UHitValidatorComponent;
class UHitValidatorConfigurator;
class UPrimitiveComponent;
class ASlasherPlayer;

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
    AKillerProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
    
    UFUNCTION(BlueprintCallable)
    void SetActiveSlashable(bool active);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    UPrimitiveComponent* GetPlayerPrimitiveComponent() const;
    
public:
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetLaunchingKiller() const;
    
};

