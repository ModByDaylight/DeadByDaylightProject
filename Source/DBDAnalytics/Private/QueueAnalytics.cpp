#include "QueueAnalytics.h"

FQueueAnalytics::FQueueAnalytics() {
    this->TimesQueuedSurvivor = 0;
    this->TimesQueuedKiller = 0;
    this->MatchesAsSurvivor = 0;
    this->MatchesAsKiller = 0;
    this->FirstTimePlaying = false;
    this->CumulativeMatches = 0;
    this->CumulativeMatchesAsSurvivor = 0;
    this->CumulativeMatchesAsKiller = 0;
    this->CumulativeSessions = 0;
    this->CumulativePlaytime = 0.00f;
    this->TimeInCharacterMenu = 0.00f;
    this->TimeInBloodwebMenu = 0.00f;
    this->TimeInLoadoutMenu = 0.00f;
    this->TimeInCustomizationMenu = 0.00f;
    this->TimeInFearMarket = 0.00f;
    this->TimeInTallyScreen = 0.00f;
    this->TimeInGameMatch = 0.00f;
    this->TimeInHelpMenu = 0.00f;
    this->TimeInOfflineLobby = 0.00f;
    this->TimeInOfflineLobbySurvivorGroup = 0.00f;
    this->TimeInOnlineLobby = 0.00f;
    this->TimeInOnlineLobbySurvivorGroup = 0.00f;
}

