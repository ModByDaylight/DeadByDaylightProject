#include "BTDecorator_IsTunable.h"

UBTDecorator_IsTunable::UBTDecorator_IsTunable() {
    this->Operator = ETunableComparison::Equal;
    this->CompareToValue = 0.00f;
}

