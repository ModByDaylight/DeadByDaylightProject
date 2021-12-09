#include "Gameplay_KillerAnalytics.h"

FGameplay_KillerAnalytics::FGameplay_KillerAnalytics() {
    this->Speed = 0.00f;
    this->BloodlustTier1Count = 0;
    this->BloodlustTier2Count = 0;
    this->BloodlustTier3Count = 0;
    this->BloodlustTier1Duration = 0.00f;
    this->BloodlustTier2Duration = 0.00f;
    this->BloodlustTier3Duration = 0.00f;
    this->BloodlustSpeed = 0.00f;
    this->ChaseCount = 0;
    this->ChaseCountFail = 0;
    this->ChaseCountSuccess = 0;
    this->ChaseCountTier1Fail = 0;
    this->ChaseCountTier1Success = 0;
    this->ChaseCountTier2Fail = 0;
    this->ChaseCountTier2Success = 0;
    this->ChaseCountTier3Fail = 0;
    this->ChaseCountTier3Success = 0;
    this->HookCount = 0;
    this->MurderCount = 0;
    this->PalletSpawned = 0;
    this->PalletProcedural = 0;
    this->PalletProceduralSetCount = 0;
    this->PalletGenerationId = 0;
    this->PalletGeneric = 0;
    this->PalletDestroyed = 0;
    this->BreakableWallSpawned = 0;
    this->BreakableWallDestroyed = 0;
    this->DropCount = 0;
    this->HitCloseCount = 0;
    this->HitCloseCountSuccess = 0;
    this->HitFarCount = 0;
    this->HitFarCountSuccess = 0;
    this->HitSpecialCount = 0;
    this->HitSpecialCountSuccess = 0;
    this->ClosetOpen = 0;
    this->ClosetOpenSuccess = 0;
    this->EscapeesHatchCount = 0;
    this->SecondesAtLeastOneSurvivorHooked = 0.00f;
    this->AmountTilesVisited = 0;
    this->StartX = 0.00f;
    this->StartY = 0.00f;
    this->StartZ = 0.00f;
}

