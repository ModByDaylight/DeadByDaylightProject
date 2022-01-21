#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "BearTrapOutlineUpdateStrategy.generated.h"

class UMapActorComponent;
class UCurveLinearColor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
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
    UBearTrapOutlineUpdateStrategy();
    UFUNCTION(BlueprintCallable)
    void SetOwningBearTrapMapActorComponent(UMapActorComponent* mapActorComponent);
    
};

