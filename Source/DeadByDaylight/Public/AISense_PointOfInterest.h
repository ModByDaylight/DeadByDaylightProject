#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AISense_PointOfInterest.generated.h"

class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UAISense_PointOfInterest : public UAISense {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<AActor*> _sources;
    
public:
    UAISense_PointOfInterest();
};

