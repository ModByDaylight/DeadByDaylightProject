#pragma once
#include "CoreMinimal.h"
#include "EHitValidatorConfigName.h"
#include "Engine/DataTable.h"
#include "HitValidationEditorConfig.generated.h"

USTRUCT(BlueprintType)
struct FHitValidationEditorConfig : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHitValidatorConfigName ConfigName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CapsuleInflation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumDistance;
    
    DEADBYDAYLIGHT_API FHitValidationEditorConfig();
};

