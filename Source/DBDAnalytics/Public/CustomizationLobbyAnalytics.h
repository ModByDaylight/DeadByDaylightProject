#pragma once
#include "CoreMinimal.h"
#include "CustomizationBaseAnalytics.h"
#include "CustomizationLobbyAnalytics.generated.h"

USTRUCT()
struct FCustomizationLobbyAnalytics : public FCustomizationBaseAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LobbyId;
    
    DBDANALYTICS_API FCustomizationLobbyAnalytics();
};

