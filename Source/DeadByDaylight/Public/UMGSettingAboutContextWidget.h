#pragma once
#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingAboutContextWidget.generated.h"

class UUMGSettingContextButton;

UCLASS(Abstract, EditInlineNew)
class UUMGSettingAboutContextWidget : public UUMGSettingContextWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSettingContextButton* EULAButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSettingContextButton* CreditsButton;
    
public:
    UUMGSettingAboutContextWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetVersionNumber(const FString& versionNumber);
    
};

