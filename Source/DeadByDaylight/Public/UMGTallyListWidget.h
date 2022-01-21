#pragma once
#include "CoreMinimal.h"
#include "UMGPageScrollWidget.h"
#include "EPlayerRole.h"
#include "ETallyListPageID.h"
#include "UMGTallyListWidget.generated.h"

class UCanvasPanel;
class UUMGTallyListElementWidget;

UCLASS(EditInlineNew)
class UUMGTallyListWidget : public UUMGPageScrollWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TopLeftText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TopRightText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ListBGPanel;
    
private:
    UPROPERTY(Transient)
    EPlayerRole _playerRole;
    
    UPROPERTY(Transient)
    TSet<int32> _inAnimationPlayedPages;
    
    UPROPERTY(Export, Transient)
    TMap<ETallyListPageID, UUMGTallyListElementWidget*> _listItemWidgets;
    
public:
    UUMGTallyListWidget();
};

