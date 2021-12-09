#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneAkTrack.generated.h"

class UMovieSceneSection;

UCLASS(Abstract, MinimalAPI)
class UMovieSceneAkTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY()
    uint8 bIsAMasterTrack: 1;
    
public:
    UMovieSceneAkTrack();
};

