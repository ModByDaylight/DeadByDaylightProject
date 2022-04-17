#pragma once
#include "CoreMinimal.h"
#include "BaseVFX.h"
#include "SpiritPassivePhaseWalkHusk.generated.h"

class USkeletalMeshComponent;
class UCustomizedSkeletalMesh;

UCLASS()
class ASpiritPassivePhaseWalkHusk : public ABaseVFX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    USkeletalMeshComponent* _huskMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UCustomizedSkeletalMesh* _huskCustomizedSkeletalMesh;
    
public:
    ASpiritPassivePhaseWalkHusk();
protected:
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterOnAllChildrenMeshes(FName parameterName, float value);
    
    UFUNCTION(BlueprintCallable)
    void SetPassivePhaseWalkHuskVisibility(bool visible);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeSpiritPassivePhaseWalkHusk(const UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_StartFadeOutPassivePhaseWalkHusk();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_InitializeSpiritPassivePhaseWalkHusk();
    
public:
    UFUNCTION(BlueprintCallable)
    void CaptureSpiritPose();
    
};

