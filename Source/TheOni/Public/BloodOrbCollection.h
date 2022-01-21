#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BloodOrbCollection.generated.h"

class ABloodOrb;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONI_API UBloodOrbCollection : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ABloodOrb*> _bloodOrbs;
    
public:
    UBloodOrbCollection();
};

