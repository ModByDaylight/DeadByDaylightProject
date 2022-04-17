#include "InterpTrackAkAudioEvent.h"

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent() {
    this->bContinueEventOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioEvent::GetEdHelperClassName() const
{
    return TEXT("UnrealEd.InterpTrackHelper");
}

const FString UInterpTrackAkAudioEvent::GetSlateHelperClassName() const
{
    return TEXT("Matinee.InterpTrackHelper");
}

#if WITH_EDITORONLY_DATA
UTexture2D* UInterpTrackAkAudioEvent::GetTrackIcon() const
{
    return TrackIcon;
}
#endif
