#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SurfaceTypeName.generated.h"

USTRUCT(BlueprintType)
struct FSurfaceTypeName : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    DEADBYDAYLIGHT_API FSurfaceTypeName();
};

