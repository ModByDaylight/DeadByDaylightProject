#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PostInteractionSoundEvent.generated.h"

class UAkAudioEvent;
class UInteractionAudioComponent;

UCLASS(CollapseCategories)
class DBDAUDIO_API UAnimNotify_PostInteractionSoundEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UInteractionAudioComponent> InteractionAudioClass;
    
    UAnimNotify_PostInteractionSoundEvent();
};

