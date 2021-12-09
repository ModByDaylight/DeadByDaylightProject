#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "ECustomizationCategory.h"
#include "CustomizationCategoryData.generated.h"

USTRUCT()
struct FCustomizationCategoryData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    ECustomizationCategory Category;
    
    UPROPERTY(EditAnywhere)
    FString IconPath;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    EPlayerRole Role;
    
    DEADBYDAYLIGHT_API FCustomizationCategoryData();
};

