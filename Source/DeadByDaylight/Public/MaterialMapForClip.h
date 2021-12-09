#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "MaterialMapForClip.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialMapForClip : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* SrcMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DstMaterial;
    
    DEADBYDAYLIGHT_API FMaterialMapForClip();
};

