#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGStalkingStatusEffectUI.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGStalkingStatusEffectUI : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* StalkedCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* StalkingFillFull;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* StalkingFillLines;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* StalkingRedBackground;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StalkingStartAnimationName;
    
public:
    UUMGStalkingStatusEffectUI();
};

