#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCharacterPrestigeIcon.generated.h"

class UImage;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterPrestigeIcon : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PrestigeImage;
    
public:
    UUMGCharacterPrestigeIcon();
};

