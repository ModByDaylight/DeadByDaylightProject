#pragma once
#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "ArchiveTierPurchasePopupScreen.generated.h"

UCLASS()
class UArchiveTierPurchasePopupScreen : public UGenericPopupScreen {
    GENERATED_BODY()
public:
    UArchiveTierPurchasePopupScreen();
private:
    UFUNCTION()
    void OnConfirmPurchase(int32 tiersToPurchaseNumber);
    
};

