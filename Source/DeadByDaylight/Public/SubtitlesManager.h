#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AkEventWithSubtitle.h"
#include "AkExternalSourceInfo.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "SubtitlesManager.generated.h"

class UAkGameObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API USubtitlesManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USubtitlesManager();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventWithSubtitles(UAkGameObject* target, const TArray<FAkEventWithSubtitle>& akEventRandomizer, float maxSubtitleDistance, int32 callbackMask, const FOnAkPostEventCallback& postEventCallback, const TArray<FAkExternalSourceInfo>& externalSources);
    
};

