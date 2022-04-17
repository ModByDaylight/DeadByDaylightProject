#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnItemPropertySelectionChangedDelegate.h"
#include "OnItemPropertyDragDetectedDelegate.h"
#include "AkItemProperties.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkItemProperties : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnItemPropertySelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemPropertyDragDetected OnPropertyDragged;
    
    UAkItemProperties();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& newText);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSelectedProperty() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
};

