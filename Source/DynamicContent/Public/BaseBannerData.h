#pragma once
#include "CoreMinimal.h"
#include "BaseBannerData.generated.h"

USTRUCT()
struct DYNAMICCONTENT_API FBaseBannerData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Priority;
    
    UPROPERTY(Transient)
    FText TitleId;
    
    UPROPERTY(Transient)
    FString BannerContentId;
    
    FBaseBannerData();
};

