#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyPip.generated.h"

class UImage;

UCLASS(EditInlineNew)
class UUMGTallyPip : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Filling;
    
public:
    UUMGTallyPip();
protected:
    UFUNCTION()
    void HideFilling();
    
};

