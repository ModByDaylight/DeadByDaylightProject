#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TutorialUIReadyEventDynamicDelegateDelegate.h"
#include "TutorialsUtilities.generated.h"

class ATutorialsUtilities;
class UObject;
class AAIController;

UCLASS()
class DEADBYDAYLIGHT_API ATutorialsUtilities : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, Transient)
    FTutorialUIReadyEventDynamicDelegate OnTutorialUIReady;
    
public:
    ATutorialsUtilities();
    UFUNCTION(BlueprintCallable)
    void TriggerTutorialHudFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void TriggerTutorialHudFadeIn();
    
    UFUNCTION(BlueprintPure)
    static ATutorialsUtilities* GetTutorialsUtilities(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyAI(AAIController* aiController);
    
};

