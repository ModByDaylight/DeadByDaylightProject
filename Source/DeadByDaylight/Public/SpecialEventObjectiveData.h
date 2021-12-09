#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "SpecialEventObjectiveData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventObjectiveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ObjectiveId;
    
    UPROPERTY(EditAnywhere)
    FText Title;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FString IconPath;
    
    UPROPERTY(EditAnywhere)
    FString ObjectiveFrameLabel;
    
    UPROPERTY(EditAnywhere)
    FText CompletedTitle;
    
    UPROPERTY(EditAnywhere)
    FText CompletedDescription;
    
    UPROPERTY(EditAnywhere)
    FName RewardId;
    
    UPROPERTY(EditAnywhere)
    FString LockedRewardGenericIconPath;
    
    UPROPERTY(EditAnywhere)
    FString UnlockedRewardGenericIconPath;
    
    UPROPERTY(EditAnywhere)
    EPlayerRole PlayerRole;
    
    UPROPERTY(EditAnywhere)
    FString StatName;
    
    UPROPERTY(EditAnywhere)
    uint32 Sections;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxValue;
    
    DEADBYDAYLIGHT_API FSpecialEventObjectiveData();
};

