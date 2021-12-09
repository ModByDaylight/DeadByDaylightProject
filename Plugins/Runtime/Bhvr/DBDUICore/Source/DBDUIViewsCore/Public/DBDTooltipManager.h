#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CustomizationTooltipViewData.h"
#include "Layout/Geometry.h"
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
    UFUNCTION(BlueprintCallable)
    void ShowCustomizationTooltip(const FCustomizationTooltipViewData& tooltipViewData, const FGeometry triggerGeometry);
    
    UFUNCTION(BlueprintCallable)
    void ShowCurrencyTooltip(const FCurrencyProgressionTooltipViewData& tooltipViewData, const FGeometry triggerGeometry);
    
    UFUNCTION(BlueprintCallable)
    void ShowCharacterTooltip(const FCharacterTooltipViewData& tooltipViewData, const FGeometry triggerGeometry);
    
    UFUNCTION(BlueprintCallable)
    void HideTooltip();
    
    UDBDTooltipManager();
};

