#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomTransformation.generated.h"

USTRUCT(BlueprintType)
struct FCustomTransformation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool UseCustomTransformation;
    
    UPROPERTY(EditAnywhere)
    FVector2D CustomScale;
    
    UPROPERTY(EditAnywhere)
    FVector2D CustomTranslation;
    
public:
    DEADBYDAYLIGHT_API FCustomTransformation();
};

