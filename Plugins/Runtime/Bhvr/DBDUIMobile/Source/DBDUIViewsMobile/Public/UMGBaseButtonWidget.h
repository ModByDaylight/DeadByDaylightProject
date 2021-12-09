#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateBrush.h"
#include "UMGBaseButtonWidget.generated.h"

class UTextBlock;
class UButton;
class UImage;
class UAkAudioEvent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGBaseButtonWidgetOnBaseButtonClickedEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGBaseButtonWidgetOnBaseButtonPressedEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGBaseButtonWidgetOnBaseButtonLongPressEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGBaseButtonWidgetOnBaseButtonReleasedEvent);

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseButtonWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGBaseButtonWidgetOnBaseButtonClickedEvent OnBaseButtonClickedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUMGBaseButtonWidgetOnBaseButtonPressedEvent OnBaseButtonPressedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUMGBaseButtonWidgetOnBaseButtonReleasedEvent OnBaseButtonReleasedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUMGBaseButtonWidgetOnBaseButtonLongPressEvent OnBaseButtonLongPressEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* Button;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* IconPicture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UTextBlock* ButtonLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ButtonPictureBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ButtonText;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* OnPressSound;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* OnClickSound;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* OnLongPressSound;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* OnReleaseSound;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* OnHoveredSound;
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonReleasedEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonPressedEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonLongPressEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonHoveredEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClickedEvent();
    
public:
    UUMGBaseButtonWidget();
};

