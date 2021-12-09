#pragma once
#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "DataTableDropdown.h"
#include "CustomizedMeshPart.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedMeshPart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECustomizationCategory Category;
    
    UPROPERTY(EditAnywhere)
    FDataTableDropdown DefaultItemId;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    DEADBYDAYLIGHT_API FCustomizedMeshPart();
};

