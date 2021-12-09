#pragma once
#include "CoreMinimal.h"
#include "SpecialEventUIInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventUIInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FString EventId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString EventBannerFrameLabel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText EventName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsPastEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString BloodwebCollectSoundEvent;
    
    DEADBYDAYLIGHT_API FSpecialEventUIInfo();
};

