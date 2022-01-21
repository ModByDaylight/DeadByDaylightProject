#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VideoPlayer.h"
#include "VideoNativePlayer.generated.h"

UCLASS()
class AVideoNativePlayer : public AActor, public IVideoPlayer {
    GENERATED_BODY()
public:
    AVideoNativePlayer();
    
    // Fix for true pure virtual functions not being implemented
};

