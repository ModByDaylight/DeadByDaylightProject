#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkHudWidget.generated.h"

class UPerkActionButton;
class UCanvasPanel;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UPerkHudWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* PerksClickable;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* PerksExternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSoftClassPtr<UPerkActionButton> AtlantaPerkActionButtonClass;
    
private:
    UPROPERTY(Export, Transient)
    TMap<FName, UPerkActionButton*> _clickablePerksMap;
    
    UPROPERTY(Export, Transient)
    TMap<FName, UPerkActionButton*> _externalPerksMap;
    
public:
    UPerkHudWidget();
    UFUNCTION(BlueprintCallable)
    void RemoveExistingPerk(FName perkID, bool isExternal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPerkClickedHandler(FName perkID);
    
};

