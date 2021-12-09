#pragma once
#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "ClonedMeshComponent.generated.h"

class USceneComponent;
class UMeshComponent;

UCLASS(Transient)
class GFXUTILITIES_API UClonedMeshComponent : public UBatchMeshCommands {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TMap<USceneComponent*, UMeshComponent*> _originalToClone;
    
    UPROPERTY(Export, Transient)
    TMap<UMeshComponent*, USceneComponent*> _cloneToOriginal;
    
public:
    UClonedMeshComponent();
};

