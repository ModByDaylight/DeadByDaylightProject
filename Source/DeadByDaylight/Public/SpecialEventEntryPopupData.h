#pragma once
#include "CoreMinimal.h"
#include "SpecialEventEntryPopupData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventEntryPopupData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Title;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FString ImagePath;
    
    UPROPERTY(EditAnywhere)
    FString FrameLabel;
    
    UPROPERTY(EditAnywhere)
    FText ImageBannerText;
    
    DEADBYDAYLIGHT_API FSpecialEventEntryPopupData();
};

