#pragma once
#include "CoreMinimal.h"
#include "SavedCharmSlotData.h"
#include "LegacySavedBloodWebPersistentData.h"
#include "LegacySavedPlayerLoadoutData.h"
#include "CharacterSavedInventoryDataV7.h"
#include "SavedCharacterLevelDataV7.h"
#include "SavedStatsDataV7.h"
#include "CharacterSavedProfileDataV7.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSavedProfileDataV7 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 BloodWebLevel;
    
    UPROPERTY(SaveGame)
    int32 PrestigeLevel;
    
    UPROPERTY(SaveGame)
    int32 CharacterExperience;
    
    UPROPERTY(SaveGame)
    int32 TimesConfronted;
    
    UPROPERTY(SaveGame)
    TArray<FString> PrestigeDates;
    
    UPROPERTY(SaveGame)
    FLegacySavedBloodWebPersistentData BloodWebData;
    
    UPROPERTY(SaveGame)
    FLegacySavedPlayerLoadoutData CharacterLoadoutData;
    
    UPROPERTY(SaveGame)
    TArray<FCharacterSavedInventoryDataV7> Inventory;
    
    UPROPERTY(SaveGame)
    TArray<FSavedCharacterLevelDataV7> CharacterProgression;
    
    UPROPERTY(SaveGame)
    TArray<FSavedStatsDataV7> StatProgression;
    
    UPROPERTY(SaveGame)
    TArray<FName> CurrentCustomization;
    
    UPROPERTY(SaveGame)
    TArray<FSavedCharmSlotData> CurrentCharmCustomization;
    
    UPROPERTY(SaveGame)
    TArray<FName> UniquePerksAdded;
    
    DEADBYDAYLIGHT_API FCharacterSavedProfileDataV7();
};

