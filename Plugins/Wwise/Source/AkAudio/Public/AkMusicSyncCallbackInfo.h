#pragma once
#include "CoreMinimal.h"
#include "AkCallbackInfo.h"
#include "AkSegmentInfo.h"
#include "EAkCallbackType.h"
#include "AkMusicSyncCallbackInfo.generated.h"

UCLASS()
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayingID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAkSegmentInfo SegmentInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAkCallbackType MusicSyncType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString UserCueName;
    
    UAkMusicSyncCallbackInfo();
};

