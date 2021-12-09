#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "Blueprint/UserWidget.h"
#include "UMGHudEditorScreen.generated.h"

class UAkAudioEvent;
class UUMGHudEditorLayoutScreen;
class UUMGHudEditorLayoutWidget;
class UUMGHudEditorVersionWidget;

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
    
    UUMGHudEditorScreen();
};

