#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaRitualDifficulty.h"
#include "EDBDScoreTypes.h"
#include "AtlantaRitualInstance.generated.h"

class UAtlantaRitualEvaluatorBase;

USTRUCT(BlueprintType)
struct FAtlantaRitualInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName RitualKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerRole Role;
    
    UPROPERTY()
    TArray<EDBDScoreTypes> TrackedEvents;
    
    UPROPERTY()
    TArray<FString> TrackedGameEvents;
    
    UPROPERTY(Transient)
    UAtlantaRitualEvaluatorBase* Evaluator;
    
    UPROPERTY()
    FAtlantaRitualDifficulty Difficulty;
    
    UPROPERTY()
    float Progress;
    
    UPROPERTY()
    bool Active;
    
    UPROPERTY()
    FDateTime ExpiryDate;
    
    DEADBYDAYLIGHT_API FAtlantaRitualInstance();
};

