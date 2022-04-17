#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPlayerRole.h"
#include "UMGHudEditorScreen.generated.h"

class UAkAudioEvent;
class UUMGHudEditorLayoutWidget;
class UUMGHudEditorVersionWidget;
class UUMGHudEditorLayoutScreen;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorScreen : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UUMGHudEditorLayoutWidget* _hudEditorLayoutWidget;
    
    UPROPERTY(Export, Transient)
    UUMGHudEditorVersionWidget* _versionSwapWidget;
    
    UPROPERTY(Export, Transient)
    TMap<EPlayerRole, UUMGHudEditorLayoutScreen*> _storedLayoutScreens;
    
    UPROPERTY(Export, Transient)
    UUMGHudEditorLayoutScreen* _currentLayoutScreen;
    
    UPROPERTY(Transient)
    UAkAudioEvent* _onDropOverlapSound;
    
public:
    UUMGHudEditorScreen();
    UFUNCTION(BlueprintCallable)
    void ShowHudLayout(EPlayerRole role);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgets(UUMGHudEditorLayoutWidget* hudEditorLayoutWidget, UUMGHudEditorVersionWidget* versionSwapWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorDropErrorOverlapSound(UAkAudioEvent* onDropOverlapSound);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEditorLayoutScreen(EPlayerRole role, UUMGHudEditorLayoutScreen* screen);
    
    UFUNCTION(BlueprintCallable)
    void Quit();
    
    UFUNCTION(BlueprintPure)
    UUMGHudEditorVersionWidget* GetVersionSwapWidget() const;
    
};

