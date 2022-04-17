#pragma once
#include "CoreMinimal.h"
#include "Fadeable.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BHVRPerDetailModeFloat -FallbackName=BHVRPerDetailModeFloat
#include "BaseSky.generated.h"

class USkyLightComponent;
class UPostProcessComponent;
class UStaticMeshComponent;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;

UCLASS()
class DEADBYDAYLIGHT_API ABaseSky : public AActor, public IFadeable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool AdjustCullDistance;
    
    UPROPERTY(EditAnywhere)
    bool EnableIBL;
    
    UPROPERTY(EditAnywhere)
    float IBLContributionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ProbesTintColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProbesSaturationValue;
    
    //UPROPERTY(AdvancedDisplay, EditAnywhere)
    //FBHVRPerDetailModeFloat ASMDepthBias;
    
    //UPROPERTY(AdvancedDisplay, EditAnywhere)
    //FBHVRPerDetailModeFloat ASMDepthAttenuation;
    
public:
    ABaseSky();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleDreamworldLighting(bool toggleOn);
    
    UFUNCTION(BlueprintCallable)
    void SetProbesTint(FLinearColor inColor, float inSaturation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCullDistance(float newCullDistance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFadeEnd(AActor* other);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFadeBegin(AActor* other);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAlphaChanged(float newAlpha, AActor* other);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPostProcessComponent* GetPostprocessComponent();
    
    UFUNCTION(BlueprintCallable)
    void CopyComponentsSettingsFromSource(UStaticMeshComponent* moonMesh, UDirectionalLightComponent* shadowLight, UDirectionalLightComponent* godRayLight, USkyLightComponent* skylight, UExponentialHeightFogComponent* heightFog, UPostProcessComponent* postProcess, UClass* sourceBaseSkyClass);
    
    
    // Fix for true pure virtual functions not being implemented
};

