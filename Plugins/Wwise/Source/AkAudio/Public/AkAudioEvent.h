#pragma once
#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkAudioEvent.generated.h"

class UAkAssetPlatformData;
class UAkAudioBank;

UCLASS(BlueprintType)
class AKAUDIO_API UAkAudioEvent : public UAkAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;
    
    UPROPERTY(EditAnywhere)
    UAkAudioBank* RequiredBank;
    
private:
    UPROPERTY(Transient)
    UAkAssetPlatformData* CurrentLocalizedPlatformData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAttenuationRadius;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInfinite;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDuration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDuration;
    
public:
    UAkAudioEvent();
    UFUNCTION(BlueprintPure)
    float GetMinimumDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaximumDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxAttenuationRadius() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInfinite() const;
    
};

