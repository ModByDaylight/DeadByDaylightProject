#include "GeneratorDrivenActor.h"

class AGenerator;
class ADBDPlayer;

void AGeneratorDrivenActor::SetSpawnedObject(AGenerator* generator, int32 generatorId) {
}


void AGeneratorDrivenActor::OnGeneratorRepairedEvent6(bool isAutoCompleted) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedEvent5(bool isAutoCompleted) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedEvent4(bool isAutoCompleted) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedEvent3(bool isAutoCompleted) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedEvent2(bool isAutoCompleted) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedEvent1(bool isAutoCompleted) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedEvent0(bool isAutoCompleted) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedBySurvivorEvent6(ADBDPlayer* repairingSurvivor) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedBySurvivorEvent5(ADBDPlayer* repairingSurvivor) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedBySurvivorEvent4(ADBDPlayer* repairingSurvivor) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedBySurvivorEvent3(ADBDPlayer* repairingSurvivor) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedBySurvivorEvent2(ADBDPlayer* repairingSurvivor) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedBySurvivorEvent1(ADBDPlayer* repairingSurvivor) {
}

void AGeneratorDrivenActor::OnGeneratorRepairedBySurvivorEvent0(ADBDPlayer* repairingSurvivor) {
}



void AGeneratorDrivenActor::Multicast_GeneratorRepairedBySurvivor_Implementation(ADBDPlayer* repairingSurvivor, int32 generatorId) {
}

void AGeneratorDrivenActor::Multicast_ActivationChecked_Implementation(bool activated, bool isAutoCompleted, int32 generatorId) {
}

bool AGeneratorDrivenActor::IsValidGeneratorId(int32 generatorId) const {
    return false;
}

bool AGeneratorDrivenActor::IsActivated(int32 generatorId) const {
    return false;
}

FRandomStream AGeneratorDrivenActor::GetSharedTileRandomizer() {
    return FRandomStream{};
}

void AGeneratorDrivenActor::Authority_CheckGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId) {
}

void AGeneratorDrivenActor::Authority_CheckActivation(bool isAutoCompleted, int32 generatorId) {
}

AGeneratorDrivenActor::AGeneratorDrivenActor() {
    this->LightPriority = 0.00f;
    this->TargetMobileLightMobility = EComponentMobility::Static;
    this->_activated.AddDefaulted(7);
    this->_generators.AddDefaulted(7);
}

