#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaBaseEventsUIData.generated.h"

class UTexture2DDynamic;

USTRUCT()
struct FAtlantaBaseEventsUIData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString EventId;
    
    UPROPERTY(Transient)
    FString Type;
    
    UPROPERTY(Transient)
    FText Title;
    
    UPROPERTY(Transient)
    FText Description;
    
    UPROPERTY(Transient)
    FString CampaignName;
    
    UPROPERTY(Transient)
    UTexture2DDynamic* Image;
    
    UPROPERTY(Transient)
    int32 EventPriority;
    
    UPROPERTY(Transient)
    int32 BannerPriority;
    
    UPROPERTY(Transient)
    FString DeepLink;
    
    UPROPERTY(Transient)
    FDateTime StartDate;
    
    UPROPERTY(Transient)
    FDateTime EndDate;
    
    UPROPERTY(Transient)
    FDateTime DisplayStartDate;
    
    UPROPERTY(Transient)
    FDateTime DisplayEndDate;
    
    UPROPERTY(Transient)
    FDateTime BannerStartDate;
    
    UPROPERTY(Transient)
    FDateTime BannerEndDate;
    
    UPROPERTY(Transient)
    FDateTime HotStartDate;
    
    UPROPERTY(Transient)
    FDateTime HotEndDate;
    
    UPROPERTY(Transient)
    FDateTime NewStartDate;
    
    UPROPERTY(Transient)
    FDateTime NewEndDate;
    
    UPROPERTY(Transient)
    TArray<FString> RelatedItemsId;
    
    UPROPERTY(Transient)
    bool mustHideParticipateButton;
    
    DEADBYDAYLIGHT_API FAtlantaBaseEventsUIData();
};

