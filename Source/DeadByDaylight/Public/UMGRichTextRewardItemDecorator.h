#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "UMGRichTextRewardItemDecorator.generated.h"

class UDataTable;

UCLASS()
class UUMGRichTextRewardItemDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* RewardSet;
    
public:
    UUMGRichTextRewardItemDecorator();
};

