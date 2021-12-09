#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "AkItemProperties.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkItemPropertiesOnSelectionChanged, const FString&, PropertySelected);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkItemPropertiesOnPropertyDragged, const FString&, PropertyDragged);

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkItemProperties : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAkItemPropertiesOnSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAkItemPropertiesOnPropertyDragged OnPropertyDragged;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& newText);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSelectedProperty() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
    UAkItemProperties();
};

