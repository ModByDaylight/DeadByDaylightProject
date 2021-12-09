#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAuthentificationProviderListWidget.generated.h"

class UHorizontalBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAuthentificationProviderListWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* GuestButtonContainer;
    
public:
    UFUNCTION(BlueprintCallable)
    void HideGuestButton();
    
    UUMGAuthentificationProviderListWidget();
};

