#include "NavLinkProxy_Base.h"

class AActor;

void ANavLinkProxy_Base::OnSmartLinkReachedCallback(AActor* MovingActor, const FVector& DestinationPoint) {
}

void ANavLinkProxy_Base::AutoAdjustSmartLinkPoints() {
}

ANavLinkProxy_Base::ANavLinkProxy_Base() {
    this->WaitLinkOffset = 250.00f;
    this->MoveOnEndPointTimeLimit = 2.00f;
    this->NbMaxLinkUsers = 1;
}

