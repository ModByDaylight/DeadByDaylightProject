#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSoundHudWidget.generated.h"

class UHorizontalBox;

UCLASS(Abstract, EditInlineNew)
class UPerkSoundHudWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* PerkIcons;
    
public:
    UPerkSoundHudWidget();
};

