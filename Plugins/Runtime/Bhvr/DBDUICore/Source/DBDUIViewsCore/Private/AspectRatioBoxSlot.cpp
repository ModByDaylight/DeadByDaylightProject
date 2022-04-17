#include "AspectRatioBoxSlot.h"

void UAspectRatioBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment) {
}

void UAspectRatioBoxSlot::SetPadding(FMargin inPadding) {
}

void UAspectRatioBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment) {
}

UAspectRatioBoxSlot::UAspectRatioBoxSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

