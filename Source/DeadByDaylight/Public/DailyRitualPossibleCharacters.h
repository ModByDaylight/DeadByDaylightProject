#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DailyRitualPossibleCharacters.generated.h"

USTRUCT(BlueprintType)
struct FDailyRitualPossibleCharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> CharacterIDs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPlayerRole> Roles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPlayerRole> SelectOneCharacterFromRoles;
    
    DEADBYDAYLIGHT_API FDailyRitualPossibleCharacters();
};

