#include "DoesPerkHaveToken.h"
#include "Net/UnrealNetwork.h"

class UPerk;

void UDoesPerkHaveToken::SetPerk(UPerk* perk) {
}

void UDoesPerkHaveToken::OnRep_Perk() {
}

void UDoesPerkHaveToken::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDoesPerkHaveToken, _perk);
}

UDoesPerkHaveToken::UDoesPerkHaveToken() {
}

