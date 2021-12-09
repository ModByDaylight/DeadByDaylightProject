#pragma once
#include "CoreMinimal.h"
#include "EQuadrantSpawnType.h"
#include "SectionLenghtsProperties.h"
#include "QuadrantSpawnTypeProperties.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantSpawnTypeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EQuadrantSpawnType QuadrantSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSectionLenghtsProperties> SectionLenghts;
    
    DEADBYDAYLIGHT_API FQuadrantSpawnTypeProperties();
};

