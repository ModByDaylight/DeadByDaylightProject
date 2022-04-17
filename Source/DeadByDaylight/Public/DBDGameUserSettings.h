#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "SharedAuthenticationTokenInformation.h"
#include "OnSetAtlantaCustomizedHudsTimestampDelegate.h"
#include "GameFramework/PlayerInput.h"
#include "AtlantaCustomizedHudSettings.h"
#include "GameFramework/PlayerInput.h"
#include "Rendering/RenderingCommon.h"
#include "DBDGameUserSettings.generated.h"

class UDBDGameUserSettings;

UCLASS()
class DEADBYDAYLIGHT_API UDBDGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TArray<FInputActionKeyMapping> ActionMappings;
    
    UPROPERTY(Config)
    TArray<FInputAxisKeyMapping> AxisMappings;
    
    UPROPERTY()
    FOnSetAtlantaCustomizedHudsTimestamp OnSetCustomizedHudsTimestamp;
    
private:
    UPROPERTY(Config)
    FString DeviceLoginTokenID;
    
    UPROPERTY(Config)
    int32 ScalabilityLevel;
    
    UPROPERTY(Config)
    bool AutoScalabilitySet;
    
    UPROPERTY(Config)
    bool AutoAdjust;
    
    UPROPERTY(Config)
    int32 ScreenResolution;
    
    UPROPERTY(Config)
    bool FullScreen;
    
    UPROPERTY(Config)
    int32 MenuScaleFactor;
    
    UPROPERTY(Config)
    int32 HudScaleFactor;
    
    UPROPERTY(Config)
    int32 SkillCheckScaleFactor;
    
    UPROPERTY(Config)
    bool LargeText;
    
    UPROPERTY(Config)
    bool HUDPlayerNamesVisibility;
    
    UPROPERTY(Config)
    bool HUDKillerHookCountVisibility;
    
    UPROPERTY(Config)
    bool HUDScoreEventsVisibility;
    
    UPROPERTY(Config)
    uint32 FPSLimit;
    
    UPROPERTY(Config)
    int32 MainVolume;
    
    UPROPERTY(Config)
    bool MainVolumeOn;
    
    UPROPERTY(Config)
    int32 MenuMusicVolume;
    
    UPROPERTY(Config)
    bool MenuMusicVolumeOn;
    
    UPROPERTY(Config)
    bool UseHeadphones;
    
    UPROPERTY(Config)
    bool MuteOnFocusLost;
    
    UPROPERTY(Config)
    int32 KillerCameraSensitivity;
    
    UPROPERTY(Config)
    int32 SurvivorCameraSensitivity;
    
    UPROPERTY(Config)
    int32 KillerMouseSensitivity;
    
    UPROPERTY(Config)
    int32 SurvivorMouseSensitivity;
    
    UPROPERTY(Config)
    int32 KillerControllerSensitivity;
    
    UPROPERTY(Config)
    int32 SurvivorControllerSensitivity;
    
    UPROPERTY(Config)
    bool AimAssist;
    
    UPROPERTY(Config)
    int32 ControlType;
    
    UPROPERTY(Config)
    bool InvertY;
    
    UPROPERTY(Config)
    bool SurvivorInvertY;
    
    UPROPERTY(Config)
    bool KillerToggleInteractions;
    
    UPROPERTY(Config)
    bool SurvivorToggleInteractions;
    
    UPROPERTY(Config)
    bool SprintToCancel;
    
    UPROPERTY(Config)
    FString Language;
    
    UPROPERTY(Config)
    bool LanguageIsDefinedByPlayer;
    
    UPROPERTY(Config)
    int32 HighestWeightSeenNews;
    
    UPROPERTY(Config)
    FSharedAuthenticationTokenInformation SharedLoginInformation;
    
    UPROPERTY(Config)
    uint32 LastPanelContextId;
    
    UPROPERTY(Config)
    bool ArchivesAutoPlayVoiceOver;
    
    UPROPERTY(Config)
    bool HasAcceptedCrossplayPopup;
    
    UPROPERTY(Config)
    bool HasAcceptedCrossProgressionPopup;
    
    UPROPERTY(Config)
    bool UseAtlantaCustomizedHuds;
    
    UPROPERTY(Config)
    bool UseAtlantaSurvivorQuickTurn;
    
    UPROPERTY(Config)
    bool UseAtlantaKillerQuickTurn;
    
    UPROPERTY(Config)
    TArray<FAtlantaCustomizedHudSettings> AtlantaCustomizedHuds;
    
    UPROPERTY(Config)
    bool ShowPortraitBorder;
    
    UPROPERTY(Config)
    FString PartyPrivacyState;
    
    UPROPERTY(Config)
    int32 ColorBlindMode;
    
    UPROPERTY(Config)
    int32 ColorBlindModeIntensity;
    
    UPROPERTY(Config)
    bool BeginnerMode;
    
    UPROPERTY(Config)
    bool Subtitles;
    
    UPROPERTY(Config)
    int32 SubtitlesBackgroundOpacity;
    
    UPROPERTY(Config)
    int32 SubtitlesSize;
    
public:
    UDBDGameUserSettings();
    UFUNCTION(BlueprintPure)
    int32 GetSkillCheckScaleFactor() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMenuScaleFactor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLargeText() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHUDScoreEventsVisibility() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHudScaleFactor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHUDPlayerNamesVisibility() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHUDKillerHookCountVisibility() const;
    
    UFUNCTION(BlueprintCallable)
    static UDBDGameUserSettings* GetDBDGameUserSettings();
    
    UFUNCTION(BlueprintPure)
    int32 GetColorBlindModeIntensity() const;
    
    UFUNCTION(BlueprintPure)
    EColorVisionDeficiency GetColorBlindMode() const;
    
};

