#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/PrimitiveComponent.h"
#include "TypeFoliageToAutomateDensity.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FTypeFoliageToAutomateDensity {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SourceMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> ReplacementMesh;
    
    UPROPERTY(EditDefaultsOnly)
    bool bGenerateOverlaps;
    
    UPROPERTY(EditDefaultsOnly)
    bool bReceiveDecals;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECanBeCharacterBase> bCanCharacterStepOn;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EDetailMode> DetailMode;
    
    UPROPERTY(EditDefaultsOnly)
    float MinimumFoliageRadius;
    
    DEADBYDAYLIGHT_API FTypeFoliageToAutomateDensity();
};

