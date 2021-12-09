#pragma once
#include "CoreMinimal.h"
#include "ETextBannerPosition.h"
#include "StoreFeaturedBannerData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedBannerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Subtitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ImagePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString AssociatedDlcId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString AssociatedCombinedItemId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString AssociatedCombinedOutfitId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETextBannerPosition TextPosition;
    
    DEADBYDAYLIGHT_API FStoreFeaturedBannerData();
};

