#pragma once
#include "CoreMinimal.h"
#include "PlayerSavedProfileDataShared.h"
#include "PlayerSavedProfileDataLocal.h"
#include "ConsoleUserSettings.h"
#include "PlayerSavedProfileData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FPlayerSavedProfileData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlayerUID;
    
    UPROPERTY()
    FPlayerSavedProfileDataShared SharedData;
    
    UPROPERTY()
    FPlayerSavedProfileDataLocal LocalData;
    
    UPROPERTY()
    FConsoleUserSettings ConsoleUserSettings;
    
    FPlayerSavedProfileData();
};

