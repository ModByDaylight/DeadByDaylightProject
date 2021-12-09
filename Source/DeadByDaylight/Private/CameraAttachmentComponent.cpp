#include "CameraAttachmentComponent.h"

void UCameraAttachmentComponent::Reset() {
}

bool UCameraAttachmentComponent::IsAttached() const {
    return false;
}

void UCameraAttachmentComponent::Detach() {
}

UCameraAttachmentComponent::UCameraAttachmentComponent() {
    this->_anchor = NULL;
}

