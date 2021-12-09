#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include "AITerrorEvent.generated.h"

class UTerrorRadiusEmitterComponent;
class AActor;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FAITerrorEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTerrorRadiusEmitterComponent* TerrorEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGenericTeamId TeamIdentifier;
    
    FAITerrorEvent();
};

