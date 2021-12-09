#include "CustomWidgetWrapper_HudEditor.h"

class UWidget;
class UCustomWidgetWrapper_HudEditor;

float UCustomWidgetWrapper_HudEditor::GetScale() const {
    return 0.0f;
}

float UCustomWidgetWrapper_HudEditor::GetOpacity() const {
    return 0.0f;
}

void UCustomWidgetWrapper_HudEditor::FlipScreenPosition() {
}

void UCustomWidgetWrapper_HudEditor::FlipPositionWithChildLinkWidget() {
}

void UCustomWidgetWrapper_HudEditor::ClampToViewport() {
}

bool UCustomWidgetWrapper_HudEditor::CanEditScale() const {
    return false;
}

bool UCustomWidgetWrapper_HudEditor::CanEditOpacity() const {
    return false;
}

void UCustomWidgetWrapper_HudEditor::ApplyScaleWithOverlappingWrappers(float scale, UWidget* widget, const TArray<UCustomWidgetWrapper_HudEditor*>& allEditableWrappers, bool needDetectOverlapping) {
}

void UCustomWidgetWrapper_HudEditor::AddToTranslation(FVector2D translation) {
}

UCustomWidgetWrapper_HudEditor::UCustomWidgetWrapper_HudEditor() {
    this->MinOpacity = 0.00f;
    this->MaxOpacity = 1.00f;
    this->MinScale = 0.50f;
    this->MaxScale = 1.50f;
    this->NbVersions = 1;
    this->HideUnderOpacity = 0.10f;
    this->HiddenStatusOpacity = 0.20f;
    this->OverlapAboveSizeRatio = 0.15f;
    this->IsEditingHudByInput = false;
}

