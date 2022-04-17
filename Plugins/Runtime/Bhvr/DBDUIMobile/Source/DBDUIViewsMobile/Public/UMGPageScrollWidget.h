#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPageScrollWidget.generated.h"

class UCanvasPanel;
class UAkAudioEvent;
class UHorizontalBox;
class UUMGScrollListPageButton;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGPageScrollWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RowCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ColumnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemGapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TotalPageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ButtonWidth;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* OnPageChangeSound;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ContainerPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* ButtonsPanel;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGScrollListPageButton> _pageButtonWidgetClass;
    
    UPROPERTY(Export, Transient)
    TArray<UCanvasPanel*> _itemArray;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _currentPageIndex;
    
    UPROPERTY(Export, Transient)
    TArray<UMobileBaseUserWidget*> _activeWidgets;
    
public:
    UUMGPageScrollWidget();
    UFUNCTION()
    void HandlePageButtonClicked(int32 pageIndex);
    
};

