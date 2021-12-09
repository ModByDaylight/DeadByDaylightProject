#include "MatchmakingHostCreatedAnalytics.h"

FMatchmakingHostCreatedAnalytics::FMatchmakingHostCreatedAnalytics() {
    this->NumPublicConnections = 0;
    this->NumPrivateConnections = 0;
    this->ShouldAdvertise = false;
    this->IsLANMatch = false;
    this->AllowInvites = false;
    this->UsesPresence = false;
    this->AllowJoinViaPresenceFriendsOnly = false;
    this->AllowJoinInProgress = false;
    this->AllowJoinViaPresence = false;
    this->Success = false;
}

