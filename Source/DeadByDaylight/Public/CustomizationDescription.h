#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomizedMeshPart.h"
#include "CustomizationDescription.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCustomizationDescription : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCustomizedMeshPart> Parts;
    
    UCustomizationDescription();
};

