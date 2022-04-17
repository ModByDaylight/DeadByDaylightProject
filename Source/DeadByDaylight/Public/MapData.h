#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TileProperties.h"
#include "MapData.generated.h"

class UAkAudioBank;
class UBlackboardData;
class UProceduralGenerationData;

UCLASS()
class UMapData : public UDataAsset {
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
    int32 MapWidth;
    
    UPROPERTY()
    int32 MapHeight;
    
    UPROPERTY()
    bool Draft;
    
    UPROPERTY()
    TArray<FTileProperties> MapTileProperties;
    
    UPROPERTY()
    UBlackboardData* Blackboard;
    
    UPROPERTY()
    bool Gesture;
    
private:
    UPROPERTY(Transient)
    UProceduralGenerationData* _proceduralGenerationData;
    
public:
    UMapData();
};

