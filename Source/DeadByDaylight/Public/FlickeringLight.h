#pragma once
#include "CoreMinimal.h"
#include "GeneratorDrivenActor.h"
#include "FlickeringLightType.h"
#include "PerPlatformProperties.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE: Engine BHVRPerDetailModeBool
//CROSS-MODULE INCLUDE: Engine BHVRPerDetailModeFloat
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FlickeringLight.generated.h"

class URectLightComponent;
class UPointLightComponent;
class ULocalLightComponent;
class ULightIntensityTimelineComponent;
class USpotLightComponent;

UCLASS()
class DEADBYDAYLIGHT_API AFlickeringLight : public AGeneratorDrivenActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FlickeringLightType _lightComponentType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDetailMode> _detailLevelBeforeCastShadows;
    
    UPROPERTY()
    FPerPlatformBool _castShadow;
    
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeBool _isCastingShadow;
    
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeFloat _maxDrawDistance;
    
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeFloat _maxDistanceFadeRange;
    
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeBool _castCinematicShadowsOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _innerConneAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _outerConneAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sourceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sourceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _intensity;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool _generatorActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isTimelineSpeedRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maximumTimelimeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _minimumTimelimeSpeed;
    
    //UPROPERTY(EditAnywhere)
    //FBHVRPerDetailModeBool _secondaryLightVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _secondaryLightIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _secondaryLightTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator _secondaryLightRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _secondaryLightAttenuationRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor _secondaryLightColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _secondaryLightSpecularScale;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    ULightIntensityTimelineComponent* _lightIntensityTimeline;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPointLightComponent* _pointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPointLightComponent* _secondaryPointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    URectLightComponent* _rectLightComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USpotLightComponent* _spotLightComponent;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopFlickering();
    
    UFUNCTION(BlueprintCallable)
    void StartFlickering();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable)
    ULocalLightComponent* GetActiveLightComponent();
    
    AFlickeringLight();
};

