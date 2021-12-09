#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BeMaterialVector.h"
#include "BeMaterialScalar.h"
#include "BeMaterialTexture.h"
#include "BeMaterialEditorHelper.generated.h"

class UTexture;
class UMaterialInstanceConstant;

UCLASS(BlueprintType)
class BEUTIL_API UBeMaterialEditorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UTexture* ReloadTexture(UTexture* InTexture, const FString& InSourceName);
    
    UFUNCTION(BlueprintCallable)
    static void EditMaterialConstant(UMaterialInstanceConstant* InMaterialInstance, TArray<FBeMaterialScalar> InScalars, TArray<FBeMaterialVector> InVectors, TArray<FBeMaterialTexture> InTextures);
    
    UBeMaterialEditorHelper();
};

