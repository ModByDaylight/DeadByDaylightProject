#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "RewardWrapperViewData.h"
#include "CoreRewardWrapperWidget.generated.h"

class UCoreCustomizationRewardWidget;
class UCoreCharacterRewardWidget;
class UCoreCurrencyProgressionRewardWidget;
class UPanelWidget;
class UCoreRewardWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreRewardWrapperWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreCharacterRewardWidget> CharacterRewardWidget;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreCurrencyProgressionRewardWidget> CurrencyProgressionRewardWidget;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreCustomizationRewardWidget> CustomizationRewardWidget;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPanelWidget* RewardContainer;
    
private:
    UPROPERTY(Export, Transient)
    UCoreRewardWidget* _rewardWidget;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetData(const FRewardWrapperViewData& viewData);
    
    UFUNCTION(BlueprintCallable)
    UCoreRewardWidget* GetRewardWidget();
    
    UFUNCTION(BlueprintCallable)
    void ClearData();
    
    UCoreRewardWrapperWidget();
};

