#pragma once
#include "CoreMinimal.h"
#include "EBarColor.h"
#include "StatusEffectViewData.h"
#include "InteractionProgressViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInteractionProgressViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SecondaryMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBarColor BarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBarColor ChargeBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowIconCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSoftObjectPtr<UTexture2D> ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStatusEffectViewData> Proficiencies;
    
    DBDUIVIEWINTERFACES_API FInteractionProgressViewData();
};

