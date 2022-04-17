#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AITerrorEvent.h"
#include "Perception/AISense.h"
#include "AISense_Terror.generated.h"

class UTerrorRadiusEmitterComponent;
class UObject;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UAISense_Terror : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FAITerrorEvent> _events;
    
public:
    UAISense_Terror();
    UFUNCTION(BlueprintCallable)
    static void ReportTerrorEvent(UObject* worldContextObj, FVector location, AActor* instigator, UTerrorRadiusEmitterComponent* terrorEmitter);
    
};

