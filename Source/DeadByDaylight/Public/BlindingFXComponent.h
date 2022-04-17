#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlindingFXComponent.generated.h"

class UCurveFloat;
class UPostProcessComponent;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlindingFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName _blindnessIntensityParameter;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _blindnessMaterialCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _blindnessCurve;
    
    UPROPERTY(Export)
    UPostProcessComponent* _postProcess;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _postProcessMaterial;
    
public:
    UBlindingFXComponent();
    UFUNCTION(BlueprintCallable)
    void SetPostProcessMaterial(UMaterialInstanceDynamic* value);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcess(UPostProcessComponent* value);
    
};

