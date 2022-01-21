#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TutorialFunctionLibrary.generated.h"

class UTutorialNotificationController;
class ATutorialGameMode;
class UObject;
class UTutorialObjectiveController;
class UTutorialHighlightController;
class ATutorialGameState;

UCLASS(BlueprintType)
class UTutorialFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTutorialFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsInTutorial(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UTutorialObjectiveController* GetTutorialObjectiveController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UTutorialNotificationController* GetTutorialNotificationController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UTutorialHighlightController* GetTutorialHighlightController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATutorialGameState* GetTutorialGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATutorialGameMode* GetTutorialGameMode(UObject* WorldContextObject);
    
};

