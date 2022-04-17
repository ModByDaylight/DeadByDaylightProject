#pragma once
#include "CoreMinimal.h"
#include "CharacterTool.h"
#include "ScreenshotViewSetting.h"
#include "GenderViewSetting.h"
#include "EScreenShotBatching.h"
#include "ECustomizationCategory.h"
#include "CharacterItemCategoryViewSetting.h"
#include "ItemViewSetting.h"
#include "RoleGenderViewSetting.h"
#include "CharacterViewSetting.h"
#include "OutfitViewSetting.h"
#include "CharacterAnimation.h"
#include "CharmCategorySetting.h"
#include "CharmViewSetting.h"
#include "NamedButton.h"
#include "UIScreenshotTool.generated.h"

class APostProcessVolume;
class ACameraActor;
class AActor;

UCLASS()
class AUIScreenshotTool : public ACharacterTool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    APostProcessVolume* PostProcessVolume;
    
    UPROPERTY(EditAnywhere)
    FString ScreenshotFolderPath;
    
    UPROPERTY(EditAnywhere)
    int32 ScreenshotResolution;
    
    UPROPERTY(EditAnywhere)
    int32 IconResolution;
    
    UPROPERTY(EditAnywhere)
    float DelayBeforeTakingScreenshot;
    
    UPROPERTY(EditAnywhere)
    EScreenShotBatching Batching;
    
    UPROPERTY(VisibleAnywhere)
    FName CurrentPart;
    
    UPROPERTY(VisibleAnywhere)
    ECustomizationCategory CurrentPartCategory;
    
    UPROPERTY(VisibleAnywhere)
    FName CurrentSetting;
    
    UPROPERTY(EditAnywhere)
    ACameraActor* ScreenshotCamera;
    
    UPROPERTY(EditAnywhere)
    bool UpdateCameraFromViewSettings;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting SurvivorHeadView;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting SurvivorTorsoView;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting SurvivorLegsView;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting KillerHeadView;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting KillerBodyView;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting KillerWeaponView;
    
    UPROPERTY(EditAnywhere)
    TArray<FGenderViewSetting> GenderViewOverrides;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharacterItemCategoryViewSetting> CharacterViewOverrides;
    
    UPROPERTY(EditAnywhere)
    TArray<FItemViewSetting> ItemViewOverrides;
    
    UPROPERTY(EditAnywhere)
    TArray<FRoleGenderViewSetting> OutfitView;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharacterViewSetting> OutfitCharacterOverrides;
    
    UPROPERTY(EditAnywhere)
    TArray<FRoleGenderViewSetting> OutfitTwoPartsView;
    
    UPROPERTY(EditAnywhere)
    TArray<FOutfitViewSetting> OutfitOverrides;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharacterAnimation> AnimationOverrides;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting CharmsView;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharmCategorySetting> CharmsCategoryOverrides;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharmViewSetting> CharmOverrides;
    
    UPROPERTY(EditAnywhere)
    FNamedButton ReloadDBButton;
    
    UPROPERTY(Transient)
    AActor* _spawnedCharm;
    
    UPROPERTY(EditAnywhere)
    FNamedButton ShowIconHelp;
    
    AUIScreenshotTool();
};

