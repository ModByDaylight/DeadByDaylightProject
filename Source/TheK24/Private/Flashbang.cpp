#include "Flashbang.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UFlashbang::OnRep_GeneratorsRepairProgress() {
}


void UFlashbang::Client_OnGeneratorRepairProgressionTargetAchieved_Implementation() {
}

void UFlashbang::Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime) {
}

void UFlashbang::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFlashbang, _generatorsRepairTargetProgression);
}

UFlashbang::UFlashbang() {
    this->_generatorBeingRepaired = NULL;
    this->_generatorsRepairTargetProgression = 0.00f;
    this->_generatorRepairPercentToCraftFlashbang[0] = 0.00f;
    this->_generatorRepairPercentToCraftFlashbang[1] = 0.00f;
    this->_generatorRepairPercentToCraftFlashbang[2] = 0.00f;
}

