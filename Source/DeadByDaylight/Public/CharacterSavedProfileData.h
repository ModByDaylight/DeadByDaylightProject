#pragma once
#include "CoreMinimal.h"
#include "CharmIdSlot.h"
#include "UObject/NoExportTypes.h"
#include "SavedCharacterLevelData.h"
#include "PlayerLoadoutData.h"
#include "BloodWebPersistentData.h"
#include "CharacterSavedInventoryData.h"
#include "SavedStatsData.h"
#include "CharacterSavedProfileData.generated.h"

USTRUCT()
struct DEADBYDAYLIGHT_API FCharacterSavedProfileData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 BloodWebLevel;
    
    UPROPERTY()
    int32 TimesConfronted;
    
    UPROPERTY()
    TArray<FDateTime> PrestigeEarnedDates;
    
    UPROPERTY()
    FBloodWebPersistentData BloodWebData;
    
    UPROPERTY()
    FPlayerLoadoutData CharacterLoadoutData;
    
    UPROPERTY()
    TArray<FName> CurrentCustomization;
    
    UPROPERTY()
    TArray<FCharmIdSlot> CurrentCharmCustomization;
    
    UPROPERTY()
    TArray<FName> UniquePerksAdded;
    
protected:
    UPROPERTY()
    TArray<FCharacterSavedInventoryData> InventoryData;
    
    UPROPERTY()
    TArray<FSavedCharacterLevelData> CharacterLevelData;
    
    UPROPERTY()
    TArray<FSavedStatsData> StatProgression;
    
private:
    UPROPERTY()
    int32 PrestigeLevel;
    
    UPROPERTY()
    int32 CharacterExperience;
    
public:
    FCharacterSavedProfileData();
};

