#pragma once
#include "CoreMinimal.h"
#include "ArchiveBaseScreen.h"
#include "ArchivePastStoriesScreen.generated.h"

UCLASS()
class UArchivePastStoriesScreen : public UArchiveBaseScreen {
    GENERATED_BODY()
public:
    UArchivePastStoriesScreen();
private:
    UFUNCTION()
    void OnStorySelected(const FString& storyId);
    
};

