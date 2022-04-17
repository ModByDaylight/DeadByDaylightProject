#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "AkAudioEventTrackKey.h"
#include "InterpTrackAkAudioEvent.generated.h"

UCLASS(CollapseCategories)
class AKAUDIO_API UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAkAudioEventTrackKey> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bContinueEventOnMatineeEnd: 1;
    
    UInterpTrackAkAudioEvent();
    
    virtual const FString	GetEdHelperClassName() const;
    virtual const FString	GetSlateHelperClassName() const;
#if WITH_EDITORONLY_DATA
    virtual UTexture2D* GetTrackIcon() const;
#endif
};

