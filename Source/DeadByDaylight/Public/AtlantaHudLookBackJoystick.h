#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudLookBackJoystick.generated.h"

class UGridPanel;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudLookBackJoystick : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UGridPanel* TutorialAnimContainer;
    
public:
    UAtlantaHudLookBackJoystick();
};

