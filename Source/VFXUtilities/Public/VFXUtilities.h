#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VFXUtilities.generated.h"

class UFXSystemComponent;

UCLASS(BlueprintType)
class VFXUTILITIES_API UVFXUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVFXUtilities();
    UFUNCTION(BlueprintCallable)
    static void SetParticleSystemsActive(TSet<UFXSystemComponent*> particleSystems, bool active, bool reset);
    
    UFUNCTION(BlueprintCallable)
    static void SetParticleSystemActive(UFXSystemComponent* particleSystem, bool active, bool reset);
    
};

