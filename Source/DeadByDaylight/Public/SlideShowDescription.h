#pragma once
#include "CoreMinimal.h"
#include "EPerkCategory.h"
#include "DBDTableRowBase.h"
#include "SlideShowDescription.generated.h"

USTRUCT(BlueprintType)
struct FSlideShowDescription : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Id;
    
    UPROPERTY(EditAnywhere)
    FText Overview;
    
    UPROPERTY(EditAnywhere)
    FText Playstyle;
    
    UPROPERTY(EditAnywhere)
    FString ImageFilePath;
    
    UPROPERTY(EditAnywhere)
    TArray<EPerkCategory> PerkCategory;
    
    DEADBYDAYLIGHT_API FSlideShowDescription();
};

