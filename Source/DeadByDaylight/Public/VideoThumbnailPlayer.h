#pragma once
#include "CoreMinimal.h"
#include "VideoPlayer.h"
#include "GameFramework/Actor.h"
#include "VideoThumbnailPlayer.generated.h"

class UMediaSoundComponent;
class UMediaPlayer;
class UMediaSource;
class UUserWidget;
class UAudioComponent;

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
    
    UFUNCTION()
    void OnVideoAssetLoaded();
    
    UFUNCTION()
    void OnMediaOpened(const FString& openedUrl);
    
    UFUNCTION()
    void OnMediaClosed();
    
    UFUNCTION()
    void OnEndReached();
    
public:
    AVideoThumbnailPlayer();
};

