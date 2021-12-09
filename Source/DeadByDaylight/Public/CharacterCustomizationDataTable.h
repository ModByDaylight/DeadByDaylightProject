#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "CharacterCustomizationDataTable.generated.h"

class UDataTable;

USTRUCT()
struct FCharacterCustomizationDataTable : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 CharacterIndex;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDataTable> CustomizationStoreDB;
    
    DEADBYDAYLIGHT_API FCharacterCustomizationDataTable();
};

