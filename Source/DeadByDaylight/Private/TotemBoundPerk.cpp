#include "TotemBoundPerk.h"
#include "Net/UnrealNetwork.h"

class ATotem;
class AActor;

void UTotemBoundPerk::OnRep_BoundTotems() {
}

TArray<ATotem*> UTotemBoundPerk::GetTotems() const {
    return TArray<ATotem*>();
}

float UTotemBoundPerk::GetDistanceToOwner(const AActor* otherActor) const {
    return 0.0f;
}

TArray<ATotem*> UTotemBoundPerk::GetBoundTotems() const {
    return TArray<ATotem*>();
}

void UTotemBoundPerk::Authority_UnbindFromTotem(ATotem* aTotemActor) {
}

bool UTotemBoundPerk::Authority_BindToDullTotems(bool allowAdditionalBoundTotems) {
    return false;
}

void UTotemBoundPerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTotemBoundPerk, _boundTotems);
}

UTotemBoundPerk::UTotemBoundPerk() {
    this->TotemBoundState = ETotemState::Cleansed;
    this->_doNotBindToTotemOnInit = false;
    this->_numTotemsToBind = 1;
}

