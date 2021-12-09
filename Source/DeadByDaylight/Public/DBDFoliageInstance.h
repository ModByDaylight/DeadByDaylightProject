#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DBDFoliageInstance.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FDBDFoliageInstance {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 BaseId;
    
    UPROPERTY(VisibleAnywhere)
    FGuid ProceduralGuid;
    
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    FRotator Rotation;
    
    UPROPERTY(VisibleAnywhere)
    FRotator PreAlignRotation;
    
    UPROPERTY(VisibleAnywhere)
    FVector DrawScale3D;
    
    UPROPERTY(VisibleAnywhere)
    float ZOffset;
    
    UPROPERTY(VisibleAnywhere)
    uint32 Flags;
    
    FDBDFoliageInstance();
};

