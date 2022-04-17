#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "TextBlockOverrideProperties.h"
#include "DBDTextBlock.generated.h"

class UDBDTextManager;
class USwitchDockStateManager;

UCLASS()
class UDBDTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FString TextStyle;
    
protected:
    UPROPERTY(EditAnywhere)
    bool _debugPreviewLargeTextState;
    
    UPROPERTY(EditAnywhere)
    bool _debugPreviewUndockedState;
    
    UPROPERTY(Transient)
    USwitchDockStateManager* _switchDockStateManager;
    
    UPROPERTY(Transient)
    UDBDTextManager* _textManager;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool _isUpperCase;
    
    UPROPERTY(EditInstanceOnly)
    bool _hasLargeText;
    
    UPROPERTY(EditInstanceOnly)
    FTextBlockOverrideProperties _largeTextProperties;
    
    UPROPERTY(EditInstanceOnly)
    bool _overrideUndockedPropertiesWithLargeText;
    
    UPROPERTY(EditInstanceOnly)
    bool _hasUndocking;
    
    UPROPERTY(EditInstanceOnly)
    FTextBlockOverrideProperties _undockedProperties;
    
public:
    UDBDTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetIsUpperCase(bool isUpperCase);
    
protected:
    UFUNCTION()
    void OnSwitchDockStateChanged(bool isDocked);
    
    UFUNCTION()
    void OnLargeTextSettingsChanged(bool isLargeText);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsUpperCase() const;
    
};

