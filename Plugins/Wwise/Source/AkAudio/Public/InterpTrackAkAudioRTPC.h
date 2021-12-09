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

    virtual const FString GetEdHelperClassName() const override;
    virtual const FString GetSlateHelperClassName() const override;
#if WITH_EDITORONLY_DATA
    virtual UTexture2D* GetTrackIcon() const override;
#endif
    
    UInterpTrackAkAudioRTPC();
};

