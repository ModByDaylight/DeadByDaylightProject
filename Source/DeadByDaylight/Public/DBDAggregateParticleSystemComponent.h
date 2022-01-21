#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "DBDAggregateParticleSystemComponent.generated.h"

class USceneComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAggregateParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CullAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndFadeDistance;
    
    UPROPERTY(Export, Transient)
    TSet<USceneComponent*> LocatorComponentCache;
    
    UPROPERTY(Transient)
    bool PendingReset;
    
public:
    UDBDAggregateParticleSystemComponent();
};

