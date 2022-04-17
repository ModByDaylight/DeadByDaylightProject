#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaunchInfo.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "ImpactInfo.h"
#include "UObject/NoExportTypes.h"
#include "BaseProjectile.generated.h"

class USphereComponent;
class UBaseProjectileReplicationComponent;
class UPrimitiveComponent;
class UBaseProjectileLauncher;

UCLASS()
class PROJECTILE_API ABaseProjectile : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float OnImpactAINoiseEventRange;
    
protected:
    UPROPERTY(EditAnywhere)
    bool _multicastLaunch;
    
    UPROPERTY(EditAnywhere)
    bool _allowMultipleHits;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer _semanticGameplayTags;
    
private:
    UPROPERTY(EditAnywhere)
    bool _notifyClientOfServerHitValidationResult;
    
    UPROPERTY(Export, Transient)
    UBaseProjectileReplicationComponent* _replicationComponent;
    
public:
    ABaseProjectile();
protected:
    UFUNCTION(BlueprintPure)
    bool SphereTraceSingle(FVector start, FVector end, USphereComponent* sphere, FHitResult& outHitResult) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetActive(const bool active);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunch(FLaunchInfo launchInfo, bool hasImpactOnLaunch);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetectPlayer(FImpactInfo impactInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetectCollision(FImpactInfo impactInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Local_TryDetectCollision(FImpactInfo impactInfo, bool force);
    
    UFUNCTION(BlueprintCallable)
    bool Local_SweepImpactCollision(const FVector& start, const FVector& end, const FRotator& colliderRotation, FHitResult& outHit);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool Local_OnPlayerDetected(FImpactInfo impactInfo, const FVector& projectileLocation);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsValidPlayerDetection(FImpactInfo impactInfo);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsValidImpactDetection(FImpactInfo impactInfo);
    
    UFUNCTION(BlueprintPure)
    bool IsOwningPawnLocallyControlled() const;
    
    UFUNCTION(BlueprintPure)
    UBaseProjectileLauncher* GetLauncher() const;
    
    UFUNCTION(BlueprintNativeEvent)
    UPrimitiveComponent* GetImpactPrimitiveComponent() const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetAddLauncherVeloctyFactor() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Authority_TryDetectCollision(FImpactInfo impactInfo, bool force);
    
};

