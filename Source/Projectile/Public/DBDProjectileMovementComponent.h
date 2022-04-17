#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "ComponentSweepInfo.h"
#include "UObject/NoExportTypes.h"
#include "DBDProjectileMovementComponent.generated.h"

class UPrimitiveComponent;
class USceneComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class PROJECTILE_API UDBDProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnComponentToSweepCollisionBP, UPrimitiveComponent*, primitiveComponent, const FHitResult&, hitResult);
    
    UPROPERTY(BlueprintAssignable)
    FOnComponentToSweepCollisionBP OnComponentToSweepCollisionBP;
    
private:
    UPROPERTY(Transient)
    TArray<FComponentSweepInfo> _componentsToSweep;
    
    UPROPERTY(Transient)
    FVector _previousPosition;
    
    UPROPERTY(Export, Transient)
    USceneComponent* _cachedUpdatedComponent;
    
    UPROPERTY(Transient)
    FVector _initialLocation;
    
    UPROPERTY(Transient)
    float _distanceTravelled;
    
    UPROPERTY(Transient)
    bool _hasMaximumDistance;
    
    UPROPERTY(Transient)
    float _maximumTravelDistance;
    
public:
    UDBDProjectileMovementComponent();
    UFUNCTION(BlueprintPure)
    FVector GetPreviousLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void AddComponentToSweep(UPrimitiveComponent* component);
    
};

