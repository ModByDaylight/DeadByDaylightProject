#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGTallyListElementWidget.generated.h"

UCLASS(EditInlineNew)
class UUMGTallyListElementWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 ElementIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D WidgetSize;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPageVisibilityChanged(bool isVisible, bool wasInAnimationPlayed);
    
    UFUNCTION(BlueprintCallable)
    void OnInAnimationFinished();
    
    UUMGTallyListElementWidget();
};

