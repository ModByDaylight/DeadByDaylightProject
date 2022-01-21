#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Curves/RichCurve.h"
#include "MovieSceneFloatChannelSerializationHelper.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneAkAudioRTPCSection.generated.h"

class UAkRtpc;

UCLASS()
class AKAUDIO_API UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAkRtpc* RTPC;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString Name;
    
    UPROPERTY()
    FRichCurve FloatCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;
    
    UPROPERTY()
    FMovieSceneFloatChannel RTPCChannel;
    
public:
    UMovieSceneAkAudioRTPCSection();
};

