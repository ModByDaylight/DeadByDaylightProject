#include "K26AttachmentStatus.h"

FK26AttachmentStatus::FK26AttachmentStatus() {
    this->LastRemovalReason = FK26AttachedCrowRemovalReason::Invalid;
    this->IsAttached = false;
}

