#pragma once
#include "CoreMinimal.h"
#include "DBDGameState.h"
#include "ETutorialStep.h"
#include "TutorialGameState.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ATutorialGameState : public ADBDGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentTutorialStepChanged, ETutorialStep, step);
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentTutorialStepChanged OnCurrentTutorialStepChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool _forceHatchVisible;
    
public:
    ATutorialGameState();
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
    
};

