#include "OtherCharactersVerticalCollisionsHandler.h"

class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

void UOtherCharactersVerticalCollisionsHandler::SetPawnDetector(UCapsuleComponent* pawnDetector) {
}

void UOtherCharactersVerticalCollisionsHandler::OnPawnDetectorOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void UOtherCharactersVerticalCollisionsHandler::OnPawnDetectorOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

void UOtherCharactersVerticalCollisionsHandler::InitializeOverlapDetection() {
}

UOtherCharactersVerticalCollisionsHandler::UOtherCharactersVerticalCollisionsHandler() {
    this->_pawnDetector = NULL;
}

