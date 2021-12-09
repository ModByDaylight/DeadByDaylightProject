#pragma once
#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingLanguageContextWidget.generated.h"

class UScrollBox;
class UUMGSettingContextButton;

UCLASS(Abstract, EditInlineNew)
class UUMGSettingLanguageContextWidget : public UUMGSettingContextWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UScrollBox* LanguageScrollBox;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGSettingContextButton> _languageButtonClass;
    
    UPROPERTY(EditAnywhere)
    int32 _languageListRowGap;
    
private:
    UPROPERTY(Export, Transient)
    UUMGSettingContextButton* _selectedLanguageButton;
    
public:
    UUMGSettingLanguageContextWidget();
};

