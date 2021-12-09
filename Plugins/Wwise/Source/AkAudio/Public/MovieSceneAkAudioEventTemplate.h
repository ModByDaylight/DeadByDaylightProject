#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioEventTemplate.generated.h"

class UMovieSceneAkAudioEventSection;

USTRUCT()
struct AKAUDIO_API FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneAkAudioEventSection* Section;
    
    FMovieSceneAkAudioEventTemplate();
};

