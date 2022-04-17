#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutFilterClickedEventDelegate.h"
#include "UMGLoadoutFilterWidget.generated.h"

class UUMGLoadoutFilterButton;
class UHorizontalBox;
class UTexture2D;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoadoutFilterWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLoadoutFilterClickedEvent OnLoadoutFilterClicked;
    
protected:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGLoadoutFilterButton> AtlantaLoadoutFilterButtonClass;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* FilterContainerBox;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FName> Filters;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TArray<UUMGLoadoutFilterButton*> FilterButtons;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UUMGLoadoutFilterButton* SelectedFilterButton;
    
public:
    UUMGLoadoutFilterWidget();
    UFUNCTION()
    void OnFilterButtonClicked(FName filterName);
    
    UFUNCTION(BlueprintCallable)
    void InitFilterWidget(const TMap<FName, TSoftObjectPtr<UTexture2D>>& filtersInfo);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedFilter();
    
};

