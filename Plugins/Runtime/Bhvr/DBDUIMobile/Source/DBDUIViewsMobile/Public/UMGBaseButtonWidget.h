#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateBrush.h"
#include "UMGBaseButtonWidget.generated.h"

class UImage;
class UButton;
class UTextBlock;
class UAkAudioEvent;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseButtonWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonReleased);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonPressed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonLongPress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonClicked);
    
    UPROPERTY(BlueprintAssignable)
    FOnBaseButtonClicked OnBaseButtonClickedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnBaseButtonPressed OnBaseButtonPressedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnBaseButtonReleased OnBaseButtonReleasedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnBaseButtonLongPress OnBaseButtonLongPressEvent;
    
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
    
public:
    UUMGBaseButtonWidget();
protected:
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
    
};

