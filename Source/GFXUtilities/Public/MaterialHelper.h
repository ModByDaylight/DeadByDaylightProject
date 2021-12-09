#pragma once
#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "MaterialHelper.generated.h"

class UMeshComponent;

UCLASS()
class GFXUTILITIES_API UMaterialHelper : public UBatchMeshCommands {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void RefreshMeshes();
    
    UFUNCTION(BlueprintCallable)
    void RefreshMesh(UMeshComponent* mc);
    
    UMaterialHelper();
};

