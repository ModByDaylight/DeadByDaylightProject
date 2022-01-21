#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EAtlantaControlTypeSetting.h"
#include "UMGControlTypeSelectionWidget.generated.h"

class UUMGControlTypeWidget;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGControlTypeSelectionWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UUMGControlTypeWidget* SnapOnJoystick;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UUMGControlTypeWidget* CameraFullScreen;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
public:
    UUMGControlTypeSelectionWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateControlType(EAtlantaControlTypeSetting controlType);
    
};

