#include "CharacterPusherComponent.h"

class AActor;
class ACharacter;
class UCapsuleComponent;
class UPrimitiveComponent;
class UBasePushStrategyComponent;

void UCharacterPusherComponent::SetIgnoredCharacter(ACharacter* character, const bool ignore) {
}

void UCharacterPusherComponent::OnCharacterDetectorOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void UCharacterPusherComponent::Construct(UCapsuleComponent* characterDetector, UCapsuleComponent* characterCollision, UBasePushStrategyComponent* pushStrategy) {
}

UCharacterPusherComponent::UCharacterPusherComponent() {
    this->_characterDetector = NULL;
    this->_characterCollision = NULL;
    this->_pushStrategy = NULL;
}

