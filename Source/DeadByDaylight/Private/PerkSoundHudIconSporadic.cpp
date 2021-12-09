#include "PerkSoundHudIconSporadic.h"

void UPerkSoundHudIconSporadic::NativeTick(const FGeometry& MyGeometry, float DeltaTime) {
}

UPerkSoundHudIconSporadic::UPerkSoundHudIconSporadic() {
    this->SporadicIcon = NULL;
    this->FadeInRate = 1.00f;
    this->FadeOutRate = 1.00f;
    this->AnimationStartOpacity = 1.00f;
    this->FadePolynomialOrder = 3;
    this->DisplayIcon = false;
}

