#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGAtlantaStoreScreen.generated.h"

class UUniformGridPanel;
class UScaleBox;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaStoreScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UScaleBox* AuricCellsWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUniformGridPanel* AuricCellsGridPanel;
    
public:
    UUMGAtlantaStoreScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void SetBank(ECurrencyType currencyType, int32 bank);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnStoreLeft();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnClickedBuyAuricCell(int32 cellIndex);
    
};

