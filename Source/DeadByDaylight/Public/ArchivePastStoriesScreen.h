#pragma once
#include "CoreMinimal.h"
#include "ArchiveBaseScreen.h"
#include "ArchivePastStoriesScreen.generated.h"

UCLASS()
class UArchivePastStoriesScreen : public UArchiveBaseScreen {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnStorySelected(const FString& storyId);
    
public:
    UArchivePastStoriesScreen();
};

