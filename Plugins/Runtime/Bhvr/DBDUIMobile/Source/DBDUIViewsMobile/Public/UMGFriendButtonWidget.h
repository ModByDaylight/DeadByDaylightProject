#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "EFriendTypeButton.h"
#include "Styling/SlateBrush.h"
#include "UMGFriendButtonWidget.generated.h"

class UImage;
class UCanvasPanel;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGFriendButtonWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UCanvasPanel* InteractableButtonStatePanel;
    
    UPROPERTY(Export)
    UCanvasPanel* NonInteractableButtonStatePanel;
    
    UPROPERTY(Export)
    UTextBlock* NonInteractableExplanationText;
    
    UPROPERTY(Export)
    UTextBlock* NonInteractableActionText;
    
    UPROPERTY(Transient)
    bool _isInteractable;
    
    UPROPERTY(Export)
    UImage* NonInteractableImage;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TMap<EFriendTypeButton, FSlateBrush> _nonInteractableImages;
    
public:
    UUMGFriendButtonWidget();
};

