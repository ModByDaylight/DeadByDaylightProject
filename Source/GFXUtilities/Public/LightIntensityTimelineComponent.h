#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LightUpdate.h"
#include "LightMaterialUpdate.h"
#include "Engine/Scene.h"
#include "OnLightTimelineFinishedDelegate.h"
#include "LightIntensityTimelineComponent.generated.h"

class UCurveFloat;
class ULightComponent;
class UMaterialHelper;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API ULightIntensityTimelineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FLightUpdate> lights;
    
    UPROPERTY(Transient)
    TArray<FLightMaterialUpdate> materialHelpers;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* intensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool randomizeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool randomizeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float minLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float maxLength;
    
    UPROPERTY(EditAnywhere)
    bool normalizeCurve;
    
    UPROPERTY(EditAnywhere)
    bool startTicking;
    
    UPROPERTY(EditAnywhere)
    ELightUnits inputLightUnit;
    
    UPROPERTY(BlueprintAssignable)
    FOnLightTimelineFinished OnTimelineFinished;
    
    ULightIntensityTimelineComponent();
    UFUNCTION(BlueprintCallable)
    void SetRandomizeLength(bool isRandom);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLength(float newMinValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLength(float newMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightToMaxValue();
    
    UFUNCTION(BlueprintCallable)
    void SetLightCurve(UCurveFloat* lightcurve);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RegisterForTick();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateTick();
    
    UFUNCTION(BlueprintCallable)
    void AddMaterialHelper(UMaterialHelper* matHelper, FName propName, float multiplier);
    
    UFUNCTION(BlueprintCallable)
    void AddLight(ULightComponent* light, float multiplier);
    
};

