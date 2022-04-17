#pragma once
#include "CoreMinimal.h"
#include "CharacterTooltipViewData.h"
#include "CoreBaseUserWidget.h"
#include "ECharacterDifficulty.h"
#include "CharacterTooltipWidget.generated.h"

class UDBDRichTextBlock;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCharacterTooltipWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* InstructionTB;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* LevelTB;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* MarketTB;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDRichTextBlock* DifficultyRTB;
    
public:
    UCharacterTooltipWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTooltipData(const FCharacterTooltipViewData& characterViewData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLevel(int32 level);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ECharacterDifficulty difficulty);
    
};

