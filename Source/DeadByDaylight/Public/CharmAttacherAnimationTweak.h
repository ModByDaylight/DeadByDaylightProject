#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharmAttacherAnimationTweak.generated.h"

USTRUCT(BlueprintType)
struct FCharmAttacherAnimationTweak {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AttachPointTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator AttachPointRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MagicTweakingFloat;
    
    DEADBYDAYLIGHT_API FCharmAttacherAnimationTweak();
};

