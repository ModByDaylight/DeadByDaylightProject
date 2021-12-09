#pragma once
#include "CoreMinimal.h"
#include "CameraAttachment.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FCameraAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Parent;
    
    DEADBYDAYLIGHT_API FCameraAttachment();
};

