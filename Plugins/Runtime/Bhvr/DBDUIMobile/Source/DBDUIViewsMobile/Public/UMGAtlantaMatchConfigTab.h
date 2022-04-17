#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaMatchConfigTab.generated.h"

class USizeBox;
class UTextBlock;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaMatchConfigTab : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USizeBox* IconSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UTextBlock* TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCanvasPanel* RandomPanel;
    
public:
    UUMGAtlantaMatchConfigTab();
};

