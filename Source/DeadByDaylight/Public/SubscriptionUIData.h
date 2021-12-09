#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SubscriptionUIData.generated.h"

class UTexture2D;

USTRUCT()
struct FSubscriptionUIData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FText> PlatformDetails;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> TitleTexture;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> PortraitBorderTexture;
    
    DEADBYDAYLIGHT_API FSubscriptionUIData();
};

