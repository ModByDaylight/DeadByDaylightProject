#pragma once
#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "SecondaryInteractionProperties.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FSecondaryInteractionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SecondaryInteractionID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EInputInteractionType SecondaryInteractionInputType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SecondaryInteractionDescriptionText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldShow;
    
    FSecondaryInteractionProperties();
};

