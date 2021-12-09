#include "CharacterDreamworldComponent.h"
#include "Net/UnrealNetwork.h"

class UObject;
class ADBDPlayer;

bool UCharacterDreamworldComponent::ShouldShowVignette() const {
    return false;
}

void UCharacterDreamworldComponent::OnRep_IsInDreamworld(bool previous) {
}

bool UCharacterDreamworldComponent::IsInDreamworld() const {
    return false;
}

ADBDPlayer* UCharacterDreamworldComponent::GetLocallyObservedOrLocalCharacter(UObject* WorldContextObject) {
    return NULL;
}

void UCharacterDreamworldComponent::FireWakeUpScoreEvent(ADBDPlayer* instigator) {
}

void UCharacterDreamworldComponent::Authority_SetIsInDreamworld(bool newValue, bool isScripted) {
}

void UCharacterDreamworldComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterDreamworldComponent, _isInDreamworld);
}

UCharacterDreamworldComponent::UCharacterDreamworldComponent() {
    this->_mobileDreamworldPostProcessClass = NULL;
    this->_isInDreamworld = false;
    this->_mobileDreamworldPostProcess = NULL;
}

