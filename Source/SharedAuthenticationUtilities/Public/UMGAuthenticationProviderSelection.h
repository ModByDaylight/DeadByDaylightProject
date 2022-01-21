#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESharedAuthenticationProvider.h"
#include "UMGAuthenticationProviderSelection.generated.h"

UCLASS(Abstract, EditInlineNew)
class SHAREDAUTHENTICATIONUTILITIES_API UUMGAuthenticationProviderSelection : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isAsia;
    
public:
    UUMGAuthenticationProviderSelection();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidgetsVisibility();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowMigrationFailedPopup();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider provider);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMigrateWarningMessageAndShowPopup(const FString& playerName);
    
};

