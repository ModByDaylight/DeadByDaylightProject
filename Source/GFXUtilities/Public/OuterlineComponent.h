#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OuterlineComponent.generated.h"

class USkeletalMeshComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UOuterlineComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* CloneCustomDepthMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* CloneTranslucentMaterial;
    
private:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _cloneCustomDepthMaterialDynamic;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _cloneTranslucentMaterialDynamic;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* _customDepthSkeletalMesh;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* _overlaySkeletalMesh;
    
public:
    UOuterlineComponent();
    UFUNCTION(BlueprintCallable)
    void SetIntensity(float intensity);
    
};

