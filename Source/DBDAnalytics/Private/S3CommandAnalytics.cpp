#include "S3CommandAnalytics.h"

FS3CommandAnalytics::FS3CommandAnalytics() {
    this->RequestContentLength = 0;
    this->ElapsedTime = 0.00f;
    this->ResponseContentLength = 0;
    this->ResponseCode = 0;
    this->Success = false;
}

