#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EEmblemQuality.h"
#include "UMGTallyEmblemWidget.generated.h"

class UTexture2D;
class UImage;

UCLASS(EditInlineNew)
class UUMGTallyEmblemWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EEmblemQuality, UTexture2D*> _emblemBackgrounds;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* IconImage;
    
public:
    UUMGTallyEmblemWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeInAnimation();
    
};

