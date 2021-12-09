#include "IsOriginatingPerkBoundToTotems.h"
#include "Net/UnrealNetwork.h"

void UIsOriginatingPerkBoundToTotems::OnRep_TotemCount() {
}

void UIsOriginatingPerkBoundToTotems::Init(EComparisonOperation comparisonOperator, int32 totemCount) {
}

void UIsOriginatingPerkBoundToTotems::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIsOriginatingPerkBoundToTotems, _comparisonOperator);
    DOREPLIFETIME(UIsOriginatingPerkBoundToTotems, _totemCount);
}

UIsOriginatingPerkBoundToTotems::UIsOriginatingPerkBoundToTotems() {
    this->_comparisonOperator = EComparisonOperation::EqualTo;
    this->_totemCount = -1;
}

