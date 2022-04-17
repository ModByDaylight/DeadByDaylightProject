#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "CharacterDescriptionOverride.generated.h"

class UTexture2D;
class ADBDPlayer;
class ADBDMenuPlayer;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FCharacterDescriptionOverride : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RequiredItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> HudIconOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ADBDMenuPlayer> MenuBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ADBDPlayer> GameBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName IconFilePathOverride;
    
    FCharacterDescriptionOverride();
};

