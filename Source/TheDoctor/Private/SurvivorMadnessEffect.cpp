#include "SurvivorMadnessEffect.h"
#include "Net/UnrealNetwork.h"

void USurvivorMadnessEffect::Server_AddMadness_Implementation(float madnessToAdd) {
}
bool USurvivorMadnessEffect::Server_AddMadness_Validate(float madnessToAdd) {
    return true;
}


void USurvivorMadnessEffect::OnStaticBlastReceived() {
}


void USurvivorMadnessEffect::OnSnapOutOfIt() {
}


void USurvivorMadnessEffect::OnShockTherapyReceived() {
}



void USurvivorMadnessEffect::Multicast_UpdateMadnessPlayerTags_Implementation(int32 newMadness) {
}
bool USurvivorMadnessEffect::Multicast_UpdateMadnessPlayerTags_Validate(int32 newMadness) {
    return true;
}

void USurvivorMadnessEffect::Multicast_OnMadnessTierUp_Implementation() {
}
bool USurvivorMadnessEffect::Multicast_OnMadnessTierUp_Validate() {
    return true;
}

void USurvivorMadnessEffect::Multicast_OnMadnessTierDown_Implementation() {
}
bool USurvivorMadnessEffect::Multicast_OnMadnessTierDown_Validate() {
    return true;
}

float USurvivorMadnessEffect::GetMadnessValue() const {
    return 0.0f;
}

int32 USurvivorMadnessEffect::GetMadnessTier() const {
    return 0;
}



void USurvivorMadnessEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USurvivorMadnessEffect, _madness);
}

USurvivorMadnessEffect::USurvivorMadnessEffect() {
    this->_madness = 0.00f;
}

