#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ParticleSystemDistanceFaderComponent.generated.h"

class UParticleSystemComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UParticleSystemDistanceFaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UParticleSystemComponent* ParticleSystemComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OpacityParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StartFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EndFadeDistance;
    
public:
    UParticleSystemDistanceFaderComponent();
};

