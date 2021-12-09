#pragma once
#include "CoreMinimal.h"
#include "Dependency.h"
#include "BuiltLevelData.generated.h"

class UAkAudioBank;

USTRUCT(BlueprintType)
struct FBuiltLevelData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ThemeName;
    
    UPROPERTY()
    FName ThemeWeather;
    
    UPROPERTY()
    FName AudioStateThemes;
    
    UPROPERTY()
    FName AudioStateWeather;
    
    UPROPERTY()
    FName AudioThemeEvent;
    
    UPROPERTY()
    TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank;
    
    UPROPERTY()
    FString MapName;
    
    UPROPERTY()
    int32 TileCount;
    
    UPROPERTY()
    TArray<FDependency> Dependencies;
    
    UPROPERTY()
    FName SpecialEventId;
    
    DEADBYDAYLIGHT_API FBuiltLevelData();
};

