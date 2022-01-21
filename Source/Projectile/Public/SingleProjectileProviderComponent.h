#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ProjectileProvider.h"
#include "SingleProjectileProviderComponent.generated.h"

class ABaseProjectile;

UCLASS(meta=(BlueprintSpawnableComponent))
class PROJECTILE_API USingleProjectileProviderComponent : public UActorComponent, public IProjectileProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseProjectile> _projectileClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Projectile)
    ABaseProjectile* _projectile;
    
public:
    USingleProjectileProviderComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_Projectile();
    
    
    // Fix for true pure virtual functions not being implemented
};

