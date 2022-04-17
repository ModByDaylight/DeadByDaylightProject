#include "DBDWrapBox.h"

class UDBDWrapBoxSlot;
class UWidget;

void UDBDWrapBox::SetInnerSlotPadding(FVector2D InPadding) {
}

void UDBDWrapBox::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UDBDWrapBoxSlot* UDBDWrapBox::AddChildToWrapBox(UWidget* Content) {
    return NULL;
}

UDBDWrapBox::UDBDWrapBox() {
    this->WrapWidth = 500.00f;
    this->bExplicitWrapWidth = false;
    this->HorizontalAlignment = HAlign_Left;
}

