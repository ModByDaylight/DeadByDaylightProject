#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaFreeTicketsAffectedCharacterData.generated.h"

USTRUCT()
struct FAtlantaFreeTicketsAffectedCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    FString TicketId;
    
    UPROPERTY()
    FDateTime EndDate;
    
    ATLANTAFREETICKETS_API FAtlantaFreeTicketsAffectedCharacterData();
};

