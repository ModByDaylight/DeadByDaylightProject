#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESharedAuthenticationProvider.h"
#include "UMGAutheticationProviderSelection.generated.h"

UCLASS(Abstract, EditInlineNew)
class SHAREDAUTHENTICATIONUTILITIES_API UUMGAutheticationProviderSelection : public UUserWidget {
    GENERATED_BODY()
public:
    UUMGAutheticationProviderSelection();
    UFUNCTION(BlueprintCallable)
    void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider provider);
    
};

