#pragma once
#include "CoreMinimal.h"
#include "MaterialMap.h"
#include "MaterialNamedGroup.generated.h"

USTRUCT(BlueprintType)
struct FMaterialNamedGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString GroupName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMaterialMap> Maps;
    
    GFXUTILITIES_API FMaterialNamedGroup();
};

