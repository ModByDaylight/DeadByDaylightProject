#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPromoPackContentWidget.generated.h"

class UHorizontalBox;
class UPromoPackContentDataAsset;
class UVerticalBox;
class UScrollBox;

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackContentWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* Content;
    
    UPROPERTY(EditDefaultsOnly)
    UPromoPackContentDataAsset* WidgetPerContentType;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UScrollBox* ScrollBox;
    
private:
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UVerticalBox>> _itemsContainer;
    
public:
    UUMGPromoPackContentWidget();
};

