#include "ArchiveVignetteEntryAnalytics.h"

FArchiveVignetteEntryAnalytics::FArchiveVignetteEntryAnalytics() {
    this->EntryId = 0;
    this->EntryTimeSpent = 0.00f;
    this->IsTaggedAsNew = false;
    this->HasVoiceOver = false;
    this->StartWithAutoplayEnable = false;
    this->IsAutoplayEnableWhenDeselectingEntry = false;
    this->VoiceoverLongestTimeSpent = 0.00f;
}

