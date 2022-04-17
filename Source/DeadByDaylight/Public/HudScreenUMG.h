#pragma once
#include "CoreMinimal.h"
#include "HudScreen.h"
#include "HudScreenUMG.generated.h"

class UNoiseIndicatorWidget;
class UUmgPlayerHud;
class USafeZoneManagerWidget;
class UExitOpenedIndicatorWidget;
class UAtlantaTutorialObjectiveManager;
class UGeneratorIndicatorWidget;
class UHookedIndicatorWidget;
class UKillerNoiseIndicatorWidget;
class UBaseIndicatorWidget;
class UPromptManager;
class UAtlantaObjectiveWidget;

UCLASS()
class UHudScreenUMG : public UHudScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UUmgPlayerHud* _atlantaHud;
    
    UPROPERTY(Export, Transient)
    USafeZoneManagerWidget* _safeZoneManager;
    
    UPROPERTY(Export, Transient)
    TArray<UNoiseIndicatorWidget*> _closeNoiseIndicatorWidgets;
    
    UPROPERTY(Export, Transient)
    TArray<UExitOpenedIndicatorWidget*> _exitOpenedIndicatorWidgets;
    
    UPROPERTY(Export, Transient)
    TArray<UGeneratorIndicatorWidget*> _generatorIndicatorWidgets;
    
    UPROPERTY(Export, Transient)
    TArray<UNoiseIndicatorWidget*> _hatchIndicatorWidgets;
    
    UPROPERTY(Export, Transient)
    TArray<UHookedIndicatorWidget*> _hookedIndicatorWidgets;
    
    UPROPERTY(Export, Transient)
    TArray<UKillerNoiseIndicatorWidget*> _killerCuesIndicatorWidgets;
    
    UPROPERTY(Export, Transient)
    TMap<FString, UNoiseIndicatorWidget*> _loudNoiseIndicatorWidgets;
    
    UPROPERTY(Export, Transient)
    UBaseIndicatorWidget* _globalSoundIndicatorWidget;
    
    UPROPERTY(Export, Transient)
    TMap<FString, UNoiseIndicatorWidget*> _offscreenNoiseIndicatorWidgets;
    
    UPROPERTY(Export, Transient)
    TMap<int32, UBaseIndicatorWidget*> _noiseIndicatorMap;
    
    UPROPERTY(Transient)
    UPromptManager* _promptManager;
    
    UPROPERTY(Transient)
    UAtlantaTutorialObjectiveManager* _objectiveManager;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UAtlantaObjectiveWidget> AtlantaObjectiveClass;
    
public:
    UHudScreenUMG();
};

