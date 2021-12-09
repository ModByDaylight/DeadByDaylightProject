#include "SubtitlesManager.h"

class UAkGameObject;
class UAkCallbackInfo;

int32 USubtitlesManager::PostAkEventWithSubtitles(UAkGameObject* target, const TArray<FAkEventWithSubtitle>& akEventRandomizer, float maxSubtitleDistance, int32 callbackMask, const FSubtitlesManagerPostEventCallback& postEventCallback, const TArray<FAkExternalSourceInfo>& externalSources) {
    return 0;
}

USubtitlesManager::USubtitlesManager() {
}

