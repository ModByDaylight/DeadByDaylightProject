#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Layout/Geometry.h"
#include "CustomizationTooltipViewData.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CharacterTooltipViewData.h"
#include "DBDTooltipManager.generated.h"

class UUserWidget;

UCLASS(BlueprintType)
class DBDUIVIEWSCORE_API UDBDTooltipManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UUserWidget* _currentTooltip;
    
public:
    UDBDTooltipManager();
    UFUNCTION(BlueprintCallable)
    void ShowCustomizationTooltip(const FCustomizationTooltipViewData& tooltipViewData, const FGeometry triggerGeometry);
    
    UFUNCTION(BlueprintCallable)
    void ShowCurrencyTooltip(const FCurrencyProgressionTooltipViewData& tooltipViewData, const FGeometry triggerGeometry);
    
    UFUNCTION(BlueprintCallable)
    void ShowCharacterTooltip(const FCharacterTooltipViewData& tooltipViewData, const FGeometry triggerGeometry);
    
    UFUNCTION(BlueprintCallable)
    void HideTooltip();
    
};

