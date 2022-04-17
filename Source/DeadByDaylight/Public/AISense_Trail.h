#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Perception/AISense.h"
#include "AITrailEvent.h"
#include "GameplayTagContainer.h"
#include "AISense_Trail.generated.h"

class UObject;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UAISense_Trail : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FAITrailEvent> Events;
    
public:
    UAISense_Trail();
    UFUNCTION(BlueprintCallable)
    static void ReportTrailEvent(UObject* worldContextObj, FVector location, AActor* instigator, FGameplayTag ignoreOnPerkTag, float lifeTime);
    
};

