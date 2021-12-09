#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TreatmentComponent.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UTreatmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetIsInTreatmentMode(bool treatmentMode);
    
    UFUNCTION(BlueprintPure)
    bool IsInTreatmentMode() const;
    
    UTreatmentComponent();
};

