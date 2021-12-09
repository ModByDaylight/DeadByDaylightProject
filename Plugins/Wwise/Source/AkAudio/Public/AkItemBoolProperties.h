#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "AkItemBoolProperties.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkItemBoolPropertiesOnSelectionChanged, const FString&, PropertySelected);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkItemBoolPropertiesOnPropertyDragged, const FString&, PropertyDragged);

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkItemBoolProperties : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAkItemBoolPropertiesOnSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAkItemBoolPropertiesOnPropertyDragged OnPropertyDragged;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& newText);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSelectedProperty() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
    UAkItemBoolProperties();
};

