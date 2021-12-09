#include "S3CommandErrorAnalytics.h"

FS3CommandErrorAnalytics::FS3CommandErrorAnalytics() {
    this->ResponseCode = 0;
    this->InvalidRequest = false;
    this->InvalidResponse = false;
    this->DecryptionFailure = false;
    this->BadResponse = false;
    this->ContentModifiedError = false;
}

