#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VideoPlayer.h"
#include "StreamVideoPlayer.generated.h"

class UAudioComponent;
class UUMGStreamVideoWidget;
class UMediaPlayer;
class UMediaSoundComponent;
class UStreamMediaSource;

UCLASS()
class DEADBYDAYLIGHT_API AStreamVideoPlayer : public AActor, public IVideoPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient)
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(Export, Transient)
    UUMGStreamVideoWidget* StreamVideoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UStreamMediaSource* StreamMediaSource;
    
private:
    UPROPERTY(Export, Transient)
    UAudioComponent* _audioComponent;
    
public:
    AStreamVideoPlayer();
private:
    UFUNCTION()
    void OnVideoAssetLoaded();
    
    UFUNCTION()
    void OnSkipButtonTriggered();
    
    UFUNCTION()
    void OnMediaOpened(const FString& openedUrl);
    
    UFUNCTION()
    void OnMediaClosed();
    
    UFUNCTION()
    void OnEndReached();
    
    
    // Fix for true pure virtual functions not being implemented
};

