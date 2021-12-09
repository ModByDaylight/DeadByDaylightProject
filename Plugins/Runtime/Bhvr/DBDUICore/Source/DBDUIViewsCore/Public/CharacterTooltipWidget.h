#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CharacterTooltipViewData.h"
#include "ECharacterDifficulty.h"
#include "CharacterTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

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
    UFUNCTION(BlueprintImplementableEvent)
    void SetTooltipData(const FCharacterTooltipViewData& characterViewData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLevel(int32 level);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ECharacterDifficulty difficulty);
    
public:
    UCharacterTooltipWidget();
};

