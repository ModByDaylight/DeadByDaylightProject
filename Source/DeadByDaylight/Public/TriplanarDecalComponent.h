#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/SceneComponent.h"
#include "TriplanarDecalComponent.generated.h"

class UTexture2D;
class UDecalComponent;
class UMaterial;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriplanarDecalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaskIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* TopTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* BottomTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* MaskTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EDetailMode> MinQualitySetting;
    
private:
    UPROPERTY(Export, Transient)
    UDecalComponent* _triPlanarDecal;
    
    UPROPERTY(Transient)
    UClass* _triPlanarDecalClass;
    
    UPROPERTY(Transient)
    UMaterial* _decalMaterial;
    
public:
    UTriplanarDecalComponent();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTriplanarDecal();
    
};

