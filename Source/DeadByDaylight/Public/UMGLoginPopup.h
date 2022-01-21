#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UMGLoginPopup.generated.h"

class UUMGAuthentificationProviderListWidget;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoginPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAuthentificationProviderListWidget* AuthenticationProviderList;
    
public:
    UUMGLoginPopup();
    UFUNCTION(BlueprintCallable)
    void ChooseProvider(const uint8 provider);
    
};

