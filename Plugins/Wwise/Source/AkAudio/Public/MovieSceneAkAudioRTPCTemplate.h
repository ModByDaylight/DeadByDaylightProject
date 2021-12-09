#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioRTPCTemplate.generated.h"

class UMovieSceneAkAudioRTPCSection;

USTRUCT()
struct AKAUDIO_API FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneAkAudioRTPCSection* Section;
    
    FMovieSceneAkAudioRTPCTemplate();
};

