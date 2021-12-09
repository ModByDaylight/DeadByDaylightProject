#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ArchiveVignetteEntryAnalytics.generated.h"

USTRUCT()
struct FArchiveVignetteEntryAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ArchiveId;
    
    UPROPERTY()
    FString VignetteId;
    
    UPROPERTY()
    int32 EntryId;
    
    UPROPERTY()
    FString SelectEntryTimestamp;
    
    UPROPERTY()
    double EntryTimeSpent;
    
    UPROPERTY()
    bool IsTaggedAsNew;
    
    UPROPERTY()
    bool HasVoiceOver;
    
    UPROPERTY()
    bool StartWithAutoplayEnable;
    
    UPROPERTY()
    bool IsAutoplayEnableWhenDeselectingEntry;
    
    UPROPERTY()
    FString StartVoiceoverTimestamp;
    
    UPROPERTY()
    double VoiceoverLongestTimeSpent;
    
    DBDANALYTICS_API FArchiveVignetteEntryAnalytics();
};

