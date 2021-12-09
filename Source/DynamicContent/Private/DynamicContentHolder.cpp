#include "DynamicContentHolder.h"

class UDownloadMultiTextureTask;

void UDynamicContentHolder::OnDownloadingTaskComplete(UDownloadMultiTextureTask* completeTask) {
}

UDynamicContentHolder::UDynamicContentHolder() {
    this->_marketingBannerProvider = NULL;
    this->_eventsBannerProvider = NULL;
    this->_loadingImagesDataProvider = NULL;
}

