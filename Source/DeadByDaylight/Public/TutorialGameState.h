#pragma once
#include "CoreMinimal.h"
#include "DBDGameState.h"
#include "ETutorialStep.h"
#include "TutorialGameState.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialGameStateOnCurrentTutorialStepChanged, ETutorialStep, step);

UCLASS()
class DEADBYDAYLIGHT_API ATutorialGameState : public ADBDGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTutorialGameStateOnCurrentTutorialStepChanged OnCurrentTutorialStepChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool _forceHatchVisible;
    
public:
    UFUNCTION(BlueprintCallable)
    void TutorialEndReached();
    
    UFUNCTION(BlueprintCallable)
    void SetForcedHatchVisibility(bool isHatchVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetEscapeRequirementsVisibility(bool isVisible) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTutorialStep(ETutorialStep step);
    
    UFUNCTION(BlueprintPure)
    bool IsTutorialStarted() const;
    
    UFUNCTION(BlueprintPure)
    ETutorialStep GetCurrentTutorialStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CompleteLocallyControlledCharacterIntros() const;
    
    ATutorialGameState();
};

