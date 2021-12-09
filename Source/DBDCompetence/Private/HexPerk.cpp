#include "HexPerk.h"
#include "Net/UnrealNetwork.h"

class AActor;
class ADBDPlayer;

void UHexPerk::UpdateCursedStatusViewOnLocalPlayer() {
}

void UHexPerk::ReceiveGameplayEvent_Implementation(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target) {
}

void UHexPerk::OnRep_PlayersWhoKnowCurse(const TArray<ADBDPlayer*> oldPlayersWhoKnowCurse) {
}

void UHexPerk::OnHexPerkGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target) {
}

bool UHexPerk::IsCurseRevealedToPlayer(const ADBDPlayer* player) const {
    return false;
}

void UHexPerk::Authority_SetCurseRevealedToPlayer(ADBDPlayer* player, const bool revealed) {
}

void UHexPerk::Authority_RevealCurseToAllSurvivors(bool revealed) {
}


void UHexPerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHexPerk, _playersWhoKnowCurse);
}

UHexPerk::UHexPerk() {
}

