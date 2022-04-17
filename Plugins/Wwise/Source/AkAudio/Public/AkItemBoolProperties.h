#pragma once
#include "CoreMinimal.h"
#include "OnItemBoolPropertySelectionChangedDelegate.h"
#include "Components/Widget.h"
#include "OnItemBoolPropertyDragDetectedDelegate.h"
#include "AkItemBoolProperties.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkItemBoolProperties : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnItemBoolPropertySelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemBoolPropertyDragDetected OnPropertyDragged;
    
    UAkItemBoolProperties();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& newText);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSelectedProperty() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
};

