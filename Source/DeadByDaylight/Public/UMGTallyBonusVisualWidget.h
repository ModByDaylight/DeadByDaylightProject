#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyBonusVisualWidget.generated.h"

class UTexture2D;
class UImage;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGTallyBonusVisualWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, TSoftObjectPtr<UTexture2D>> MultiplierTextureMap;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* MultiplierImage;
    
public:
    UUMGTallyBonusVisualWidget();
};

