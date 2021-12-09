#pragma once
#include "CoreMinimal.h"
#include "StoreScreen.h"
#include "StoreScreenUMG.generated.h"

class UUMGCustomizationScreenWidget;
class UUMGAtlantaStoreScreen;

UCLASS()
class UStoreScreenUMG : public UStoreScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UUMGCustomizationScreenWidget* _customizationScreen;
    
    UPROPERTY(Export, Transient)
    UUMGAtlantaStoreScreen* _storeScreen;
    
public:
    UStoreScreenUMG();
};

