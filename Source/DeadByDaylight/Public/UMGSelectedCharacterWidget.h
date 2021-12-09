#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGSelectedCharacterWidget.generated.h"

class UVerticalBox;
class UUMGCharacterPrestigeButton;
class UTextBlock;
class UImage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGSelectedCharacterWidgetOnCancelPartyButtonClick);

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGSelectedCharacterWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterPrestigeButton* PrestigeButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CharacterNameText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CharacterLevelText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* CharacterLevelVerticalBox;
    
    UPROPERTY(Export)
    UImage* LeaderIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FUMGSelectedCharacterWidgetOnCancelPartyButtonClick _onCancelPartyButtonClick;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisualsForReadyState(const bool isPlayerReady);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisualsForPartyState(const bool triggerPartyVisuals);
    
protected:
    UFUNCTION()
    void OnPrestigeButtonClicked();
    
public:
    UUMGSelectedCharacterWidget();
};

