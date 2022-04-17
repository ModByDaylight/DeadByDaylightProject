#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCommandDebugButton.generated.h"

class UTextBlock;
class UButton;

UCLASS(EditInlineNew)
class UUMGCommandDebugButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTextBlock* CommandLabel;
    
    UPROPERTY(Export)
    UButton* CommandButton;
    
    UPROPERTY(EditAnywhere)
    FString CommandName;
    
public:
    UUMGCommandDebugButton();
private:
    UFUNCTION()
    void TriggerCommand();
    
};

