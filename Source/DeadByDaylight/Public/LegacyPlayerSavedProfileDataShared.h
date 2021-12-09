#pragma once
#include "CoreMinimal.h"
#include "LegacyPlayerSavedProfileDataShared.generated.h"

USTRUCT(BlueprintType)
struct FLegacyPlayerSavedProfileDataShared {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FString PlayerName;
    
    UPROPERTY(SaveGame)
    int32 SelectedCamperIndex;
    
    UPROPERTY(SaveGame)
    int32 SelectedSlasherIndex;
    
    UPROPERTY(SaveGame)
    TArray<FName> SelectedCharacterCustomization;
    
    UPROPERTY(SaveGame)
    int32 SlasherSkulls;
    
    UPROPERTY(SaveGame)
    int32 CamperSkulls;
    
    UPROPERTY(SaveGame)
    int32 CamperStreak;
    
    DEADBYDAYLIGHT_API FLegacyPlayerSavedProfileDataShared();
};

