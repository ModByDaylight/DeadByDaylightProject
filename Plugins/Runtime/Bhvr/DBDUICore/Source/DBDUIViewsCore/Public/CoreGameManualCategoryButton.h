#pragma once
#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CoreGameManualCategoryButton.generated.h"

class UDBDTextBlock;
class UDBDImage;
class UTexture2D;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreGameManualCategoryButton : public UCoreButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDTextBlock* Description;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDImage* Background;
    
    UPROPERTY(EditInstanceOnly, NoClear)
    UTexture2D* IconTexture;
    
    UPROPERTY(EditInstanceOnly, NoClear)
    UTexture2D* BackgroundTexture;
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText NewTitle, const FText NewDescription);
    
    UCoreGameManualCategoryButton();
};

