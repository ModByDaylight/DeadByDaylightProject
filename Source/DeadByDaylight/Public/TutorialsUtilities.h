#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TutorialsUtilities.generated.h"

class AAIController;
class ATutorialsUtilities;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTutorialsUtilitiesOnTutorialUIReady);

UCLASS()
class DEADBYDAYLIGHT_API ATutorialsUtilities : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, Transient)
    FTutorialsUtilitiesOnTutorialUIReady OnTutorialUIReady;
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerTutorialHudFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void TriggerTutorialHudFadeIn();
    
    UFUNCTION(BlueprintPure)
    static ATutorialsUtilities* GetTutorialsUtilities(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyAI(AAIController* aiController);
    
    ATutorialsUtilities();
};

