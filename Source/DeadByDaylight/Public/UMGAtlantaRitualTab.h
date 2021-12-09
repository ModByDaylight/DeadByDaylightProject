#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaRitualTab.generated.h"

class UVerticalBox;
class UUMGAltantaRitual;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaRitualTab : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* ContainerBox;
    
private:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAltantaRitual> _itemWidgetClass;
    
    UFUNCTION()
    void BroadcastOnClaimRewardsButtonPressed(const int32 ritualId);
    
public:
    UUMGAtlantaRitualTab();
};

