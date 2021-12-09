#pragma once
#include "CoreMinimal.h"
#include "VideoPlayer.h"
#include "GameFramework/Actor.h"
#include "VideoNativePlayer.generated.h"

UCLASS()
class AVideoNativePlayer : public AActor, public IVideoPlayer {
    GENERATED_BODY()
public:
    AVideoNativePlayer();
};

