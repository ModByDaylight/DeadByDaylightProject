#pragma once
#include "CoreMinimal.h"
#include "StreamVideoUIData.generated.h"

class UMediaPlayer;
class UUMGStreamVideoWidget;

USTRUCT()
struct FStreamVideoUIData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString VideoURL;
    
    UPROPERTY(Transient)
    FString Language;
    
    UPROPERTY(Transient)
    bool HasAudio;
    
    UPROPERTY(Transient)
    int32 ZOrderWidget;
    
    UPROPERTY(Transient)
    TSoftClassPtr<UUMGStreamVideoWidget> StreamVideoWidgetAsset;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UMediaPlayer> MediaPlayerAsset;
    
    DEADBYDAYLIGHT_API FStreamVideoUIData();
};

