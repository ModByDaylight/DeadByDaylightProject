#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RootMovie.generated.h"

class UGFxMoviePlayer;
class UUIController;
class UScreenController;
class UGameInstance;
class UDBDInputManager;
class UGFxObject;

UCLASS()
class DEADBYDAYLIGHT_API URootMovie : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SwfAssetName;
    
    UPROPERTY()
    UGFxMoviePlayer* SwfMoviePlayer;
    
private:
    UPROPERTY(Transient)
    UScreenController* m_ScreenController;
    
    UPROPERTY(Transient)
    UUIController* m_UIController;
    
    UPROPERTY(Transient)
    UGameInstance* m_GameInstance;
    
    UPROPERTY(Transient)
    UDBDInputManager* _inputManager;
    
public:
    UFUNCTION()
    void SetCursorAsSticky(bool isSticky, bool lockVertical, bool lockHorizontal, float stickinessOverride);
    
    UFUNCTION()
    void RegisterView(const FString& screenId, UGFxObject* screenObject);
    
    UFUNCTION()
    void RegisterUIControl(UGFxObject* flashObj);
    
    UFUNCTION()
    void RegisterScreenControl(UGFxObject* flashObj);
    
    UFUNCTION()
    void PlaySound(const FString& soundId);
    
    UFUNCTION()
    void OpenLinkInBrowser(const FString& linkAddress);
    
    UFUNCTION()
    void OnScreenReady(const FString& screenId);
    
    UFUNCTION()
    void OnScreenLeave(const FString& screenId);
    
    UFUNCTION()
    void OnScreenEnter(const FString& screenId);
    
    UFUNCTION()
    void OnMovieClosed();
    
    UFUNCTION()
    void OnFlashReady();
    
    UFUNCTION()
    void OnAssert(int32 type, const FString& message);
    
    URootMovie();
};

