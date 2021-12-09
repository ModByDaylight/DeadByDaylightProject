#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EActionOnFriendType.h"
#include "UMGBaseFriendListContextualMenuWidget.generated.h"

class UUMGFriendButtonWidget;
class UAkAudioEvent;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseFriendListContextualMenuWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UUMGFriendButtonWidget* InviteToPartyButton;
    
    UPROPERTY(Export)
    UUMGFriendButtonWidget* MuteButton;
    
    UPROPERTY(Export)
    UUMGFriendButtonWidget* UnmuteButton;
    
    UPROPERTY(Export)
    UUMGFriendButtonWidget* RemoveFriendButton;
    
    UPROPERTY(Export)
    UUMGFriendButtonWidget* RemovePlayerFromPartyButton;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* TransitionOutAnimationSound;
    
    UFUNCTION(BlueprintCallable)
    void HandleActionTriggered(EActionOnFriendType actionType);
    
public:
    UUMGBaseFriendListContextualMenuWidget();
};

