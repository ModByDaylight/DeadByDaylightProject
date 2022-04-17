#include "WhiteGlyphBasementComponent.h"

class AGlyph;

AGlyph* UWhiteGlyphBasementComponent::GetOwningGlyph() const {
    return NULL;
}

UWhiteGlyphBasementComponent::UWhiteGlyphBasementComponent() {
    this->_basementGlyphInteractionCoolDownTime = 0.00f;
}

