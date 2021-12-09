#include "AnalogCursorData.h"

FAnalogCursorData::FAnalogCursorData() {
    this->Type = EAnalogCursorDataType::MaxSpeedDefault;
    this->Value = 0.00f;
    this->ScalesWithDPI = false;
}

