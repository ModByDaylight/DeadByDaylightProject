#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaFriendUIData.h"
#include "EActionOnFriendType.h"
#include "UMGBaseFriendListElement.generated.h"

class UNamedSlot;
class UCanvasPanel;
class UImage;
class UDataTable;
class UTextBlock;
class UUMGBaseButtonWidget;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseFriendListElement : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UImage* StatusPicture;
    
    UPROPERTY(Export)
    UTextBlock* FriendName;
    
    UPROPERTY(Export)
    UTextBlock* FriendStatus;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SelectionHighlight;
    
    UPROPERTY(Export)
    UUMGBaseButtonWidget* ItemSelectionBaseButton;
    
    UPROPERTY(Export)
    UNamedSlot* ContextualMenuPosition;
    
    UPROPERTY()
    FAtlantaFriendUIData _cachedFriendData;
    
    UPROPERTY(EditAnywhere)
    UDataTable* FriendUIStatusDataTable;
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerActionOnThisFriend(EActionOnFriendType actionType);
    
    UUMGBaseFriendListElement();
};

