#include "RootMovie.h"

class UGFxObject;

void URootMovie::SetCursorAsSticky(bool isSticky, bool lockVertical, bool lockHorizontal, float stickinessOverride) {
}

void URootMovie::RemoveCursorBlockingWidget(const FString& id) {
}

void URootMovie::RegisterView(const FString& screenId, UGFxObject* screenObject) {
}

void URootMovie::RegisterUIControl(UGFxObject* flashObj) {
}

void URootMovie::RegisterScreenControl(UGFxObject* flashObj) {
}

void URootMovie::PlaySound(const FString& soundId) {
}

void URootMovie::OpenLinkInBrowser(const FString& linkAddress) {
}

void URootMovie::OnScreenReady(const FString& screenId) {
}

void URootMovie::OnScreenLeave(const FString& screenId) {
}

void URootMovie::OnScreenEnter(const FString& screenId) {
}

void URootMovie::OnMovieClosed() {
}

void URootMovie::OnFlashReady() {
}

void URootMovie::OnAssert(int32 type, const FString& message) {
}

void URootMovie::AddCursorBlockingWidget(const FString& id, float x, float y, float width, float height) {
}

URootMovie::URootMovie() {
    this->SwfAssetName = TEXT("/Game/UI/Root/Root.Root");
    this->SwfMoviePlayer = NULL;
    this->m_ScreenController = NULL;
    this->m_UIController = NULL;
    this->m_GameInstance = NULL;
    this->_inputManager = NULL;
}

