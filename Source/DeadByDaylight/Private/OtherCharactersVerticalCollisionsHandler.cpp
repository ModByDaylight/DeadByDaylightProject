#include "OtherCharactersVerticalCollisionsHandler.h"

class UPrimitiveComponent;
class UCapsuleComponent;
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

