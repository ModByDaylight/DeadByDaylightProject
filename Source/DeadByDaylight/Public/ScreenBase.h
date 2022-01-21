#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ScreenBase.generated.h"

class UGFxObject;
class UScreenController;

UCLASS(Abstract)
class UScreenBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsAnimationDone;
    
protected:
    UPROPERTY(Transient)
    UGFxObject* ScreenObject;
    
    UPROPERTY(Transient)
    UScreenController* _screenController;
    
public:
    UScreenBase();
    UFUNCTION()
    void SetFadesOut(bool fadesOut) const;
    
    UFUNCTION()
    void OnTextInputMouseClicked(bool isPassword);
    
    UFUNCTION()
    void OnStart();
    
    UFUNCTION()
    void OnNavKey(const FString& navKey);
    
    UFUNCTION()
    void OnHideVirtualKeyboardRequested();
    
    UFUNCTION()
    void OnEscape();
    
    UFUNCTION()
    void OnBack();
    
    UFUNCTION()
    void OnAnyKey(float code);
    
    UFUNCTION()
    void OnAnimationUpdate(int32 NewIsAnimationDone);
    
    UFUNCTION()
    void BroadcastOnHighlightedElementClickedEvent(const FName onBoardingID);
    
};

