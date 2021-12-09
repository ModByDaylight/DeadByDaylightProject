#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "PrestigeIconData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPrestigeIconData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerRole PlayerRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PrestigeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    DEADBYDAYLIGHT_API FPrestigeIconData();
};

