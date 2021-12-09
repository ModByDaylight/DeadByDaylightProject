#pragma once
#include "CoreMinimal.h"
#include "TutorialLevel.h"
#include "AtlantaTutorialLevel.generated.h"

class AActor;
class ADBDPlayer;
class ADBDAIPlayerController;
class APlayerController;

UCLASS()
class DEADBYDAYLIGHT_API AAtlantaTutorialLevel : public ATutorialLevel {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void StartCameraFadeIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTutorialElements();
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialElement(const FString& elementKey, AActor* elementToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetLocallyControlledPlayer(ADBDPlayer* locallyControllerPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetAIEscapePoints(TArray<AActor*> escapePoints);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTutorialStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlapActor(const FString& triggerID, AActor* overlappingActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsActorInLineOfSight(ADBDAIPlayerController* aiPlayerController, APlayerController* playerController);
    
private:
    UFUNCTION()
    void HandleCanStartTutorialChanged(bool canStartTutorial);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetTutorialElement(const FString& elementKey) const;
    
    AAtlantaTutorialLevel();
};

