#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDMistManager.generated.h"

class UDBDAggregateParticleSystemComponent;

UCLASS()
class DEADBYDAYLIGHT_API ADBDMistManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UDBDAggregateParticleSystemComponent* _particleSystemComp;
    
public:
    ADBDMistManager();
};

