#include "VideoThumbnailPlayer.h"

void AVideoThumbnailPlayer::OnVideoAssetLoaded() {
}

void AVideoThumbnailPlayer::OnMediaOpened(const FString& openedUrl) {
}

void AVideoThumbnailPlayer::OnMediaClosed() {
}

void AVideoThumbnailPlayer::OnEndReached() {
}

AVideoThumbnailPlayer::AVideoThumbnailPlayer() {
    this->MediaPlayer = NULL;
    this->SoundComponent = NULL;
    this->VideoPlayerWidget = NULL;
    this->_audioComponent = NULL;
}

