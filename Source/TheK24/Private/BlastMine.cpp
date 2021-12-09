#include "BlastMine.h"
#include "Net/UnrealNetwork.h"

class AGenerator;
class UInteractionDefinition;
class AActor;




void UBlastMine::Server_OnActionInputPressed_Implementation(AGenerator* generator) {
}

void UBlastMine::OnRep_TrappedGenerator(AGenerator* oldGenerator) {
}

void UBlastMine::OnRep_CurrentRepairInteractionWithAbility(UInteractionDefinition* oldRepairInteraction) {
}


void UBlastMine::Client_TrapActivatedLoudNotification_Implementation(FTransform location) {
}

void UBlastMine::Authority_OnRepairProgress(float IndividualChargeAmount, float TotalChargeAmount, AActor* ChargeInstigator, bool WasCoop, float DeltaTime) {
}

void UBlastMine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlastMine, _currentRepairInteractionWithAbility);
    DOREPLIFETIME(UBlastMine, _trappedGenerator);
    DOREPLIFETIME(UBlastMine, _progressPercent);
    DOREPLIFETIME(UBlastMine, _trapActivated);
    DOREPLIFETIME(UBlastMine, _repairTimerDone);
}

UBlastMine::UBlastMine() {
    this->_firecrackerHeight = 0.00f;
    this->_secondsToActivatePerk = 0.00f;
    this->_kickChargePercentMin = 0.00f;
    this->_kickChargePercentMax = 0.00f;
    this->_progressPercentRequirementLevels[0] = 0.00f;
    this->_progressPercentRequirementLevels[1] = 0.00f;
    this->_progressPercentRequirementLevels[2] = 0.00f;
    this->__generatorTrapDurationLevels[0] = 0.00f;
    this->__generatorTrapDurationLevels[1] = 0.00f;
    this->__generatorTrapDurationLevels[2] = 0.00f;
    this->_canBeReusedOnTimerExpire = true;
    this->_canBeReusedAfterTrapActivation = true;
    this->_currentRepairInteractionWithAbility = NULL;
    this->_trappedGenerator = NULL;
    this->_progressPercent = 0.00f;
    this->_trapActivated = false;
    this->_repairTimerDone = false;
    this->_kickInteractionPlayerOwner = NULL;
    this->_kickInteraction = NULL;
    this->_repairProgressGenerator = NULL;
}

