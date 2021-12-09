#pragma once
#include "CoreMinimal.h"
#include "SaveDataBase.h"
#include "LegacyPlayerSavedProfileDataShared.h"
#include "LegacyPlayerSavedProfileDataLocal.h"
#include "LegacyPlayerSavedProfileData.generated.h"

USTRUCT()
struct FLegacyPlayerSavedProfileData : public FSaveDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FString PlayerUID;
    
    UPROPERTY(SaveGame)
    FLegacyPlayerSavedProfileDataShared SharedData;
    
    UPROPERTY(SaveGame)
    FLegacyPlayerSavedProfileDataLocal LocalData;
    
    DEADBYDAYLIGHT_API FLegacyPlayerSavedProfileData();
};

