#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RootMovie.generated.h"

class UDBDInputManager;
class UGFxMoviePlayer;
class UScreenController;
class UUIController;
class UGameInstance;
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
    URootMovie();
    UFUNCTION()
    void SetCursorAsSticky(bool isSticky, bool lockVertical, bool lockHorizontal, float stickinessOverride);
    
    UFUNCTION()
    void RemoveCursorBlockingWidget(const FString& id);
    
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
    
    UFUNCTION()
    void AddCursorBlockingWidget(const FString& id, float x, float y, float width, float height);
    
};

