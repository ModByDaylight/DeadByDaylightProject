#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaCustomMatchLobbyScreen.generated.h"

class UUMGBaseButtonWidget;
class UVerticalBox;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGAtlantaCustomMatchLobbyScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBaseButtonWidget* EditButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* RulesBox;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* CustomMatchTitle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* MatchRulesTitle;
    
public:
    UUMGAtlantaCustomMatchLobbyScreen();
protected:
    UFUNCTION()
    void HandleEditConfigButtonClicked();
    
};

