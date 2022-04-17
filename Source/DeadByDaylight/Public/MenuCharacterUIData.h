#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTableRowBase.h"
#include "MenuCharacterUIData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FMenuCharacterUIData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharacterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector offsetMainMenuForwardPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector offsetMainMenuBackwardPosition;
    
    FMenuCharacterUIData();
};

