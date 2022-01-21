#pragma once
#include "CoreMinimal.h"
#include "ArchiveBaseScreen.h"
#include "ArchiveStoryScreen.generated.h"

UCLASS()
class UArchiveStoryScreen : public UArchiveBaseScreen {
    GENERATED_BODY()
public:
    UArchiveStoryScreen();
private:
    UFUNCTION()
    void OnVignetteSelected(const FString& vignetteId);
    
    UFUNCTION()
    void OnStoryMapCreated();
    
    UFUNCTION()
    void OnStoryLevelCompletedOrMasteredAnimationDone(bool wasJustCompleted);
    
    UFUNCTION()
    void OnReceiveNodeCoordinates(const FString& nodeId, int32 posX, int32 PosY);
    
    UFUNCTION()
    void OnReceiveNeighbor(const FString& nodeId, const FString& neighborId);
    
    UFUNCTION()
    void OnQuestsSelected();
    
    UFUNCTION()
    void OnPlayVoiceOver(bool startPlaying, int32 entryIndex);
    
    UFUNCTION()
    void OnPlayCinematic(int32 index);
    
    UFUNCTION()
    void OnNodeSelected(const FString& nodeId);
    
    UFUNCTION()
    void OnLevelSelected(int32 levelIndex);
    
    UFUNCTION()
    void OnJournalSelected();
    
    UFUNCTION()
    void OnEntrySelected(int32 index);
    
    UFUNCTION()
    void OnAutoplayChanged(bool autoplayActive, int32 entryIndex);
    
    UFUNCTION()
    void OnAllNodesReceived();
    
};

