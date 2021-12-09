#include "AnimEffectHandler.h"

class ACharacter;

bool UAnimEffectHandler::HandleAnimNotify_Implementation(ACharacter* player, const FName& notifyName) const {
    return false;
}

UAnimEffectHandler::UAnimEffectHandler() {
}

