#include "DBDDesignTunables.h"

float UDBDDesignTunables::GetTunableValue(FName ID, bool warnIfRowMissing) const {
    return 0.0f;
}

UDBDDesignTunables::UDBDDesignTunables() {
    this->WinStreakThresholdLarge = 0;
    this->WinStreakThresholdSmall = 0;
    this->MaxFearTokens = 0;
    this->QuantityOfItemsToBuyBeforeFreeBloodwebRefresh = 0;
    this->ShouldUseKillerLobby = false;
    this->AtlantaDesignTunables = NULL;
}

