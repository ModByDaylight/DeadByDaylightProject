#pragma once
#include "CoreMinimal.h"
#include "VideoPlayer.h"
#include "GameFramework/Actor.h"
#include "StreamVideoPlayer.generated.h"

class UMediaSoundComponent;
class UUMGStreamVideoWidget;
class UMediaPlayer;
class UStreamMediaSource;
class UAudioComponent;

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
    
public:
    AStreamVideoPlayer();
};

