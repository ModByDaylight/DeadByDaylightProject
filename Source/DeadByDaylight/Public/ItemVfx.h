#pragma once
#include "CoreMinimal.h"
#include "BaseVFX.h"
#include "ItemVfx.generated.h"

class USkeletalMeshComponent;
class UParticleSystemComponent;

UCLASS()
class DEADBYDAYLIGHT_API AItemVfx : public ABaseVFX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UParticleSystemComponent*> _particleSystems;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackBegin();
    
    UFUNCTION(BlueprintCallable)
    void ClearParticleSystems();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AttachToSkeletalMesh(USkeletalMeshComponent* SkeletonPart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddParticleSystemComponent(UParticleSystemComponent* particleSystemComponent);
    
public:
    AItemVfx();
};

