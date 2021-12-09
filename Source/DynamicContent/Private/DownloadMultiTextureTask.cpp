#include "DownloadMultiTextureTask.h"

class UDownloadingTextureTask;

void UDownloadMultiTextureTask::OnTextureDownloadComplete(UDownloadingTextureTask* taskCompleted) {
}

UDownloadMultiTextureTask::UDownloadMultiTextureTask() {
    this->_remainingTasks = 0;
}

