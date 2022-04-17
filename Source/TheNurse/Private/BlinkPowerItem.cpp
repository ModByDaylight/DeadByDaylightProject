#include "BlinkPowerItem.h"
#include "Interactor.h"

ABlinkPowerItem::ABlinkPowerItem() {
    this->_powerInteractor = CreateDefaultSubobject<UInteractor>(TEXT("Power Interactor"));
    this->_blinkChargeable = NULL;
}

