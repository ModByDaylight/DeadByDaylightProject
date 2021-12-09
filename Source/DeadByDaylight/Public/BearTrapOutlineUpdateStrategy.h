#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "BearTrapOutlineUpdateStrategy.generated.h"

class UCurveLinearColor;
class UMapActorComponent;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UBearTrapOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FLinearColor UnrevealedColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor RevealedColorToSurvivor;
    
    UPROPERTY(EditAnywhere)
    UCurveLinearColor* KillerOutlineFadeCurve;
    
    UPROPERTY(Export, Transient)
    UMapActorComponent* _owningBearTrapMapActorComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOwningBearTrapMapActorComponent(UMapActorComponent* mapActorComponent);
    
    UBearTrapOutlineUpdateStrategy();
};

