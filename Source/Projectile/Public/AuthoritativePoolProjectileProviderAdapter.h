#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProjectileProvider.h"
#include "AuthoritativePoolProjectileProviderAdapter.generated.h"

class UAuthoritativeActorPoolComponent;

UCLASS(BlueprintType)
class PROJECTILE_API UAuthoritativePoolProjectileProviderAdapter : public UObject, public IProjectileProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UAuthoritativeActorPoolComponent* _pool;
    
public:
    UAuthoritativePoolProjectileProviderAdapter();
    UFUNCTION(BlueprintCallable)
    void Init(UAuthoritativeActorPoolComponent* pool);
    
    
    // Fix for true pure virtual functions not being implemented
};

