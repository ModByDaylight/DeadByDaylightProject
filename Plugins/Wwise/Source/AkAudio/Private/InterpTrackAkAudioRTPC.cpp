#include "InterpTrackAkAudioRTPC.h"

UInterpTrackAkAudioRTPC::UInterpTrackAkAudioRTPC() {
    this->bPlayOnReverse = false;
    this->bContinueRTPCOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioRTPC::GetEdHelperClassName() const
{
    return TEXT("UnrealEd.InterpTrackHelper");
}

const FString UInterpTrackAkAudioRTPC::GetSlateHelperClassName() const
{
    return TEXT("Matinee.InterpTrackHelper");
}

#if WITH_EDITORONLY_DATA
UTexture2D* UInterpTrackAkAudioRTPC::GetTrackIcon() const
{
    return TrackIcon;
}
#endif