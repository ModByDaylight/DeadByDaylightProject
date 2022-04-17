#pragma once
#include "CoreMinimal.h"
#include "MaterialNamedGroup.h"
#include "Components/SceneComponent.h"
#include "MaterialHelperOriginalMeshState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BatchMeshCommands.generated.h"

class UTexture;
class UMaterialInterface;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UBatchMeshCommands : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMaterialNamedGroup> Groups;
    
    UPROPERTY(Transient)
    TArray<FMaterialHelperOriginalMeshState> TargetMeshes;
    
private:
    UPROPERTY(Transient)
    FString _materialGroupName;
    
public:
    UBatchMeshCommands();
    UFUNCTION(BlueprintCallable)
    void UpdateMaterials();
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameter(const FName parameterName, const FVector& newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureParameter(const FName parameterName, UTexture* newTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetStencilIntegerScalarParameter(const FName parameterName, const int32& newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameter(const FName parameterName, const float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderInMainPass(bool inRenderInMainPass);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderInCustomDepth(bool renderInCustomDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderInCustomColourNoDepth(bool renderInCustomColour);
    
    UFUNCTION(BlueprintCallable)
    void SetReceivesDecals(bool receivesDecals);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(const FString& groupName);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingChannelForAllMeshes(FLightingChannels lightingChannels);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDepthStencilValue(int32 stencilValue);
    
    UFUNCTION(BlueprintCallable)
    void SetColourParameter(const FName parameterName, const FLinearColor newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCastCinematicShadows(bool castCinematicShadows);
    
    UFUNCTION(BlueprintCallable)
    void SetAllToSameMaterial(UMaterialInterface* materialInterface);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaterials();
    
    UFUNCTION(BlueprintCallable)
    bool CopyFirstScalarParameter(const FName parameterName, float& outValue);
    
    UFUNCTION(BlueprintCallable)
    void BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void BatchSetSkipComponentAndChildrenTransformUpdate(bool skip);
    
    UFUNCTION(BlueprintCallable)
    void BatchSetComponentTickEnabled(bool enabled);
    
};

