#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "ArchiveDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArchiveDefinition : public FDBDTableRowBaseWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString PurchasePassPicturePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString PurchaseTierPicturePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText PurchasePassPopupMessage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString StyleFrameLabel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString EventStoryLabel;
    
    DEADBYDAYLIGHT_API FArchiveDefinition();
};

