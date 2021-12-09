#include "Gameplay_ChaseAnalytics.h"

FGameplay_ChaseAnalytics::FGameplay_ChaseAnalytics() {
    this->IsABot = false;
    this->CoordXStartKiller = 0.00f;
    this->CoordYStartKiller = 0.00f;
    this->CoordZStartKiller = 0.00f;
    this->CoordXEndKiller = 0.00f;
    this->CoordYEndKiller = 0.00f;
    this->CoordZEndKiller = 0.00f;
    this->PalletsDestroyedByKiller = 0;
    this->WindowsVaultedByKiller = 0;
    this->PalletsVaultedByKiller = 0;
    this->BasicAttackSwingsByKiller = 0;
    this->BasicAttackHitsByKiller = 0;
    this->SpecialAttackAttemptsByKiller = 0;
    this->SpecialAttackHitsByKiller = 0;
    this->DistanceCoveredKiller = 0.00f;
    this->CoordXStartSurvivor = 0.00f;
    this->CoordYStartSurvivor = 0.00f;
    this->CoordZStartSurvivor = 0.00f;
    this->CoordXEndSurvivor = 0.00f;
    this->CoordYEndSurvivor = 0.00f;
    this->CoordZEndSurvivor = 0.00f;
    this->PalletsDroppedBySurvivor = 0;
    this->PalletsStunnedBySurvivor = 0;
    this->WindowsVaultedBySurvivor = 0;
    this->PalletsVaultedBySurvivor = 0;
    this->StartingHealthOfSurvivor = 0;
    this->EndingHealthOfSurvivor = 0;
    this->AmountHealedOfSurvivor = 0;
    this->AmountOfTilesVisitedSurvivor = 0;
    this->DistanceCoveredSurvivor = 0.00f;
    this->DisplacementSurvivor = 0.00f;
    this->ChaseStartTimeInSecond = 0.00f;
    this->ChaseEndTimeInSecond = 0.00f;
}

