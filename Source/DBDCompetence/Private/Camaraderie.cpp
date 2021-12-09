#include "Camaraderie.h"

void UCamaraderie::Authority_EnablePerk() {
}

UCamaraderie::UCamaraderie() {
    this->_percentUseItem[0] = 0.00f;
    this->_percentUseItem[1] = 0.00f;
    this->_percentUseItem[2] = 0.00f;
    this->_pauseTimer[0] = 0.00f;
    this->_pauseTimer[1] = 0.00f;
    this->_pauseTimer[2] = 0.00f;
    this->_needItemToTrigger = true;
}

