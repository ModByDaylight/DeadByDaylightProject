#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GFXUtilities.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType)
class GFXUTILITIES_API UGFXUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void ActivateVFX(USkeletalMeshComponent* skeletalMeshComponent, bool active);
    
    UGFXUtilities();
};

