#pragma once
#include "CoreMinimal.h"
#include "DBDBaseMatchGameMode.h"
#include "TutorialGameMode.generated.h"

class UTutorialObjectiveController;
class UTutorialNotificationController;
class UTutorialHighlightController;
class UAtlantaTutorialPlayerHudController;
class AGenerator;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ATutorialGameMode : public ADBDBaseMatchGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTutorialObjectiveController* _tutorialObjectiveController;
    
    UPROPERTY(Transient)
    UTutorialNotificationController* _tutorialNotificationController;
    
    UPROPERTY(Transient)
    UTutorialHighlightController* _tutorialHighlightController;
    
    UPROPERTY(Transient)
    UAtlantaTutorialPlayerHudController* _atlantaTutorialPlayerHudController;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEscapeGenerators(const TArray<AGenerator*>& escapeGenerators, int32 requiredActivationCount);
    
    UFUNCTION(BlueprintCallable)
    void SetEscapeActivated();
    
    UFUNCTION(BlueprintPure)
    UTutorialObjectiveController* GetTutorialObjectiveController() const;
    
    UFUNCTION(BlueprintPure)
    UTutorialNotificationController* GetTutorialNotificationController() const;
    
    UFUNCTION(BlueprintPure)
    UTutorialHighlightController* GetTutorialHighlightController() const;
    
    UFUNCTION(BlueprintPure)
    UAtlantaTutorialPlayerHudController* GetAtlantaTutorialPlayerHudController() const;
    
    ATutorialGameMode();
};

