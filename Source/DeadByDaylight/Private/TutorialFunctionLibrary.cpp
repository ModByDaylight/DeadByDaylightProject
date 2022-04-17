#include "TutorialFunctionLibrary.h"

class UTutorialObjectiveController;
class UObject;
class UTutorialNotificationController;
class UTutorialHighlightController;
class ATutorialGameState;
class ATutorialGameMode;

bool UTutorialFunctionLibrary::IsInTutorial(const UObject* WorldContextObject) {
    return false;
}

UTutorialObjectiveController* UTutorialFunctionLibrary::GetTutorialObjectiveController(UObject* WorldContextObject) {
    return NULL;
}

UTutorialNotificationController* UTutorialFunctionLibrary::GetTutorialNotificationController(UObject* WorldContextObject) {
    return NULL;
}

UTutorialHighlightController* UTutorialFunctionLibrary::GetTutorialHighlightController(UObject* WorldContextObject) {
    return NULL;
}

ATutorialGameState* UTutorialFunctionLibrary::GetTutorialGameState(UObject* WorldContextObject) {
    return NULL;
}

ATutorialGameMode* UTutorialFunctionLibrary::GetTutorialGameMode(UObject* WorldContextObject) {
    return NULL;
}

UTutorialFunctionLibrary::UTutorialFunctionLibrary() {
}

