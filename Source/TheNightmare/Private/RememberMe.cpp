#include "RememberMe.h"

class AActor;

bool URememberMe::DidLoseHealthState(const AActor* damagedActor, int32 oldHealthStateCount) const {
    return false;
}

URememberMe::URememberMe() {
}

