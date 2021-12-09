#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "ComponentSweepInfo.h"
#include "UObject/NoExportTypes.h"
#include "DBDProjectileMovementComponent.generated.h"

class UPrimitiveComponent;
class USceneComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDBDProjectileMovementComponentOnComponentToSweepCollisionBP, UPrimitiveComponent*, primitiveComponent, const FHitResult&, hitResult);

UCLASS()
class PROJECTILE_API UDBDProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDBDProjectileMovementComponentOnComponentToSweepCollisionBP OnComponentToSweepCollisionBP;
    
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
    UFUNCTION(BlueprintPure)
    FVector GetPreviousLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void AddComponentToSweep(UPrimitiveComponent* component);
    
    UDBDProjectileMovementComponent();
};

