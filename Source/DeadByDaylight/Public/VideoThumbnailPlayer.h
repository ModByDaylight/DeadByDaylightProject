#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VideoPlayer.h"
#include "VideoThumbnailPlayer.generated.h"

class UAudioComponent;
class UMediaPlayer;
class UMediaSource;
class UMediaSoundComponent;
class UUserWidget;

UCLASS()
class DEADBYDAYLIGHT_API AVideoThumbnailPlayer : public AActor, public IVideoPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient)
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(Export, Transient)
    UUserWidget* VideoPlayerWidget;
    
private:
    UPROPERTY(Export, Transient)
    UAudioComponent* _audioComponent;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UMediaSource> _source;
    
public:
    AVideoThumbnailPlayer();
private:
    UFUNCTION()
    void OnVideoAssetLoaded();
    
    UFUNCTION()
    void OnMediaOpened(const FString& openedUrl);
    
    UFUNCTION()
    void OnMediaClosed();
    
    UFUNCTION()
    void OnEndReached();
    
    
    // Fix for true pure virtual functions not being implemented
};

