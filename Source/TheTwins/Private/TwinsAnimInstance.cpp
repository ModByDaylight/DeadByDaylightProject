#include "TwinsAnimInstance.h"

UTwinsAnimInstance::UTwinsAnimInstance() {
    this->_isDormant = false;
    this->_hasBrotherAttached = false;
    this->_isPossessing = false;
    this->_isWakingUpFromPossess = false;
    this->_isAutoPossessingAfterRelease = false;
}

