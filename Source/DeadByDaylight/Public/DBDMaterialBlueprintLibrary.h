#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DBDMaterialBlueprintLibrary.generated.h"

class UParticleSystemComponent;
class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDMaterialBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDMaterialBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterValueOnMeshComponent(UMeshComponent* Mesh, FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformParameterValueOnMeshComponent(UMeshComponent* Mesh, FName ParameterName, FTransform Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformParameterValueOnMaterialDynamic(UMaterialInstanceDynamic* Material, FName ParameterName, FTransform Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformParameterInverseValueOnMaterialDynamic(UMaterialInstanceDynamic* Material, FName ParameterName, FTransform Value);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMaterialInstanceDynamic*> CreateDynamicMaterialInstanceForParticleSystem(UParticleSystemComponent* System);
    
};

