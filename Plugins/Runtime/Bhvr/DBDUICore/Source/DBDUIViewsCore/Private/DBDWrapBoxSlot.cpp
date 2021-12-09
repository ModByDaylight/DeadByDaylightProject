#include "DBDWrapBoxSlot.h"

void UDBDWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UDBDWrapBoxSlot::SetPadding(FMargin InPadding) {
}

void UDBDWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UDBDWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
}

void UDBDWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
}

UDBDWrapBoxSlot::UDBDWrapBoxSlot() {
    this->bFillEmptySpace = false;
    this->FillSpanWhenLessThan = 0.00f;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

