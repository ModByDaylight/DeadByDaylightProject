#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnItemSelectionChangedDelegate.h"
#include "OnItemDragDetectedDelegate.h"
#include "AkWwiseObjectDetails.h"
#include "AkWwiseTree.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkWwiseTree : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnItemSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemDragDetected OnItemDragged;
    
    UAkWwiseTree();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& newText);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FAkWwiseObjectDetails GetSelectedItem() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
};

