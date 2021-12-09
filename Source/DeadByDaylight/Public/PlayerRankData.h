#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "PlayerRankData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerRankData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString MirrorsId;
    
    UPROPERTY(Transient)
    EPlayerRole PlayerRole;
    
    UPROPERTY(Transient)
    int32 PlayerRankForRole;
    
    DEADBYDAYLIGHT_API FPlayerRankData();
};

