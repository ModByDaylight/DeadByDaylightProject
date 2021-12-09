#pragma once
#include "CoreMinimal.h"
#include "CharacterStateData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FCharacterStateData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 _pips;
    
    UPROPERTY()
    FName _powerId;
    
    UPROPERTY()
    TArray<FName> _addonIds;
    
public:
    FCharacterStateData();
};

