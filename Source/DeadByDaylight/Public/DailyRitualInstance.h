#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDBDScoreTypes.h"
#include "EPlayerRole.h"
#include "GameplayTagContainer.h"
#include "DailyRitualInstance.generated.h"

USTRUCT(BlueprintType)
struct FDailyRitualInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName RitualKey;
    
    UPROPERTY()
    int32 DifficultyTier;
    
    UPROPERTY()
    TArray<EDBDScoreTypes> TrackedEvents;
    
    UPROPERTY()
    TArray<FGameplayTag> TrackedGameEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> CharacterIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EPlayerRole> Roles;
    
    UPROPERTY()
    float Progress;
    
    UPROPERTY()
    float Threshold;
    
    UPROPERTY()
    float Tolerance;
    
    UPROPERTY()
    float DisplayThreshold;
    
    UPROPERTY()
    float ExpReward;
    
    UPROPERTY()
    bool Active;
    
    UPROPERTY()
    bool IsNew;
    
    UPROPERTY()
    FDateTime DateAssigned;
    
    UPROPERTY()
    int32 NbGameElapsed;
    
    DEADBYDAYLIGHT_API FDailyRitualInstance();
};

