#pragma once
#include "CoreMinimal.h"
#include "EDBDAnalyticsGameMode.generated.h"

UENUM()
enum class EDBDAnalyticsGameMode {
    AnalyticsServer,
    AnalyticsClient,
    AnalyticsLoading,
    AnalyticsLobby,
    AnalyticsMenu,
    AnalyticsPostGame,
    AnalyticsPerfTests,
    AnalyticsSplashScreen,
};

