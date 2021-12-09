#include "AkExternalSourceInfo.h"

FAkExternalSourceInfo::FAkExternalSourceInfo() {
    this->CodecID = AkCodecId::Bank;
    this->ExternalSourceAsset = NULL;
    this->IsStreamed = false;
}

