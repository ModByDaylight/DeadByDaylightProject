#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAkCallbackType.h"
#include "AkEventWithSubtitle.h"
#include "AkExternalSourceInfo.h"
#include "SubtitlesManager.generated.h"

class UAkGameObject;
class UAkCallbackInfo;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSubtitlesManagerPostEventCallback, EAkCallbackType, CallbackType, UAkCallbackInfo*, CallbackInfo);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API USubtitlesManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostAkEventWithSubtitles(UAkGameObject* target, const TArray<FAkEventWithSubtitle>& akEventRandomizer, float maxSubtitleDistance, int32 callbackMask, const FSubtitlesManagerPostEventCallback& postEventCallback, const TArray<FAkExternalSourceInfo>& externalSources);
    
    USubtitlesManager();
};

