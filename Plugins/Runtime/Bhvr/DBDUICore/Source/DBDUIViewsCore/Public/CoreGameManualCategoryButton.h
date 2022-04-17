#pragma once
#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CoreGameManualCategoryButton.generated.h"

class UTexture2D;
class UDBDTextBlock;
class UDBDImage;

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
    
    UCoreGameManualCategoryButton();
    UFUNCTION(BlueprintCallable)
    void SetText(const FText NewTitle, const FText NewDescription);
    
};

