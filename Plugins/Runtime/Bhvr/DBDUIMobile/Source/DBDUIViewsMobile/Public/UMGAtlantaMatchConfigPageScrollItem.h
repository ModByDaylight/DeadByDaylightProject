#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaMatchConfigPageScrollItem.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaMatchConfigPageScrollItem : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCanvasPanel* ImagePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCanvasPanel* DefaultPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UImage* DefaultImage;
    
    UPROPERTY(BlueprintReadWrite)
    float _unselectedOpacity;
    
    UPROPERTY(BlueprintReadWrite)
    float _selectedOpacity;
    
public:
    UUMGAtlantaMatchConfigPageScrollItem();
};

