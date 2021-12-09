#include "StreamVideoPlayer.h"

void AStreamVideoPlayer::OnVideoAssetLoaded() {
}

void AStreamVideoPlayer::OnSkipButtonTriggered() {
}

void AStreamVideoPlayer::OnMediaOpened(const FString& openedUrl) {
}

void AStreamVideoPlayer::OnMediaClosed() {
}

void AStreamVideoPlayer::OnEndReached() {
}

AStreamVideoPlayer::AStreamVideoPlayer() {
    this->MediaPlayer = NULL;
    this->SoundComponent = NULL;
    this->StreamVideoWidget = NULL;
    this->StreamMediaSource = NULL;
    this->_audioComponent = NULL;
}

