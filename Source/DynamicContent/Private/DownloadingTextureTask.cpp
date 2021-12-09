#include "DownloadingTextureTask.h"

class UTexture2DDynamic;

void UDownloadingTextureTask::OnDownloadSucceeded(UTexture2DDynamic* textureDownloaded) {
}

void UDownloadingTextureTask::OnDownloadFailed(UTexture2DDynamic* textureDownloaded) {
}

UDownloadingTextureTask::UDownloadingTextureTask() {
    this->_downloadingTask = NULL;
    this->_downloadedTexture = NULL;
}

