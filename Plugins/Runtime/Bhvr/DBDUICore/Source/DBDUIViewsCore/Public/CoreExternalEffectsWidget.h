#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreBaseHudWidget.h"
#include "ExternalEffectsViewInterface.h"
#include "UObject/NoExportTypes.h"
#include "PerkViewData.h"
#include "AddonViewData.h"
#include "Engine/EngineTypes.h"
#include "CoreExternalEffectsWidget.generated.h"

class UGridPanel;
class UCoreAddonWidget;
class UPerkViewInterface;
class IPerkViewInterface;
class UCorePerkWidget;
class UAddonViewInterface;
class IAddonViewInterface;
class USpacer;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreExternalEffectsWidget : public UCoreBaseHudWidget, public IExternalEffectsViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector2D GridSlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float AddonScaleRatio;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SpacingBetweenRows;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SpacingPerks;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SpacingAddons;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SpacingBetweenPerksAndAddons;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSubclassOf<UCorePerkWidget> PerkWidgetClass;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSubclassOf<UCoreAddonWidget> AddonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGridPanel* Container;
    
private:
    UPROPERTY(Transient)
    TArray<FPerkViewData> _perkData;
    
    UPROPERTY(Export, Transient)
    TMap<FName, UCorePerkWidget*> _perkWidgets;
    
    UPROPERTY(Export, Transient)
    TArray<UCorePerkWidget*> _perkPool;
    
    UPROPERTY(Transient)
    TMap<FName, TScriptInterface<IPerkViewInterface>> _perkViewInterfaces;
    
    UPROPERTY(Transient)
    TArray<FAddonViewData> _addonData;
    
    UPROPERTY(Export, Transient)
    TMap<FName, UCoreAddonWidget*> _addonWidgets;
    
    UPROPERTY(Export, Transient)
    TArray<UCoreAddonWidget*> _addonPool;
    
    UPROPERTY(Transient)
    TMap<FName, TScriptInterface<IAddonViewInterface>> _addonViewInterfaces;
    
    UPROPERTY(Transient)
    TMap<FName, FTimerHandle> _timerHandleMap;
    
    UPROPERTY(Export, Transient)
    TMap<FName, USpacer*> _spacerWidgets;
    
    UPROPERTY(Export, Transient)
    TArray<USpacer*> _spacerPool;
    
    UFUNCTION()
    void HideExternalPerk(const FName& perkId);
    
    UFUNCTION()
    void HideExternalAddon(const FName& addonId);
    
public:
    UCoreExternalEffectsWidget();
};

