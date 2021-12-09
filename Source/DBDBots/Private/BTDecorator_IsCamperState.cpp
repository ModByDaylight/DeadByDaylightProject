#include "BTDecorator_IsCamperState.h"

UBTDecorator_IsCamperState::UBTDecorator_IsCamperState() {
    this->DamageState = ECamperDamageState::VE_Dead;
    this->DamageOp = EArithmeticKeyOperation::Equal;
    this->ImmobilizeState = ECamperImmobilizeState::VE_None;
    this->ImmobilizeOp = EArithmeticKeyOperation::Equal;
    this->OnFilter = EIsCamperStateOnFilter::OnBlackboardKey;
    this->OnOthersFilterOp = EArithmeticKeyOperation::Equal;
    this->NbOnOthersCampers = 0;
}

