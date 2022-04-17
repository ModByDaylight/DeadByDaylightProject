#include "UMGHudEditorLayoutWidget.h"

class UAkAudioEvent;
class UUMGDragWidget_HudEditor;
class UUMGHudEditorScreen;
class UCustomWidgetWrapper_HudEditor;

void UUMGHudEditorLayoutWidget::ShowSurvivorLayout() {
}

void UUMGHudEditorLayoutWidget::ShowKillerLayout() {
}

void UUMGHudEditorLayoutWidget::SetWidgetToEdit_Implementation(UUMGDragWidget_HudEditor* widget) {
}

void UUMGHudEditorLayoutWidget::SetSaveOverlapSound(UAkAudioEvent* onSaveOverlapSound) {
}

void UUMGHudEditorLayoutWidget::SetHudEditorScreen_Implementation(UUMGHudEditorScreen* NewHudEditorScreen) {
}

void UUMGHudEditorLayoutWidget::SaveLayout() {
}

void UUMGHudEditorLayoutWidget::ResetLayout() {
}


UCustomWidgetWrapper_HudEditor* UUMGHudEditorLayoutWidget::GetHudEditorWrapperToEdit() const {
    return NULL;
}

UUMGDragWidget_HudEditor* UUMGHudEditorLayoutWidget::GetCurrentDragWidget() const {
    return NULL;
}

void UUMGHudEditorLayoutWidget::FlipLayout() {
}

void UUMGHudEditorLayoutWidget::FlagSaveAsDirty() {
}

UUMGHudEditorLayoutWidget::UUMGHudEditorLayoutWidget() {
    this->HudEditorScreen = NULL;
    this->_onSaveOverlapSound = NULL;
    this->_currentWidgetToEdit = NULL;
}

