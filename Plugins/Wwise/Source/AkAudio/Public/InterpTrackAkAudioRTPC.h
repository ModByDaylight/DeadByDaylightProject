#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "InterpTrackAkAudioRTPC.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPlayOnReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bContinueRTPCOnMatineeEnd: 1;
    
    UInterpTrackAkAudioRTPC();

    virtual const FString	GetEdHelperClassName() const;
    virtual const FString	GetSlateHelperClassName() const;
#if WITH_EDITORONLY_DATA
    virtual UTexture2D* GetTrackIcon() const;
#endif
};

