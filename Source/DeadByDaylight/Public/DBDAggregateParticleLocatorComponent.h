#pragma once
#include "CoreMinimal.h"
#include "DBDLocatorComponent.h"
#include "DBDAggregateParticleLocatorComponent.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAggregateParticleLocatorComponent : public UDBDLocatorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* Template;
    
private:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* _particleComponent;
    
public:
    UDBDAggregateParticleLocatorComponent();
};

