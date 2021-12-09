#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESurvivorTutorialSections.h"
#include "EKillerTutorialSections.h"
#include "AnalyticsFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void StartSurvivorTutorialSectionAnalytics(UObject* WorldContextObject, ESurvivorTutorialSections tutorialSection);
    
    UFUNCTION(BlueprintCallable)
    static void StartKillerTutorialSectionAnalytics(UObject* WorldContextObject, EKillerTutorialSections tutorialSection);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementHookSpawned();
    
    UFUNCTION(BlueprintCallable)
    static void EndSurvivorTutorialSectionAnalytics(UObject* WorldContextObject, ESurvivorTutorialSections tutorialSection);
    
    UFUNCTION(BlueprintCallable)
    static void EndKillerTutorialSectionAnalytics(UObject* WorldContextObject, EKillerTutorialSections tutorialSection);
    
    UAnalyticsFunctionLibrary();
};

