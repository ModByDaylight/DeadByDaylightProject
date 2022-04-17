#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "UObject/NoExportTypes.h"
#include "RichTextFreeTicketTextInfo.h"
#include "RichTextFreeTicketImageInfo.h"
#include "UMGRichTextFreeTicketDecorator.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class UUMGRichTextFreeTicketDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector2D FreeTicketOverrideSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRichTextFreeTicketImageInfo FreeTicketIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRichTextFreeTicketImageInfo FreeTicketBG;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRichTextFreeTicketTextInfo FreeTicketDurationTitle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRichTextFreeTicketTextInfo FreeTicketTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRichTextFreeTicketTextInfo FreeTicketDurationInHours;
    
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* TitleStyleSet;
    
public:
    UUMGRichTextFreeTicketDecorator();
};

