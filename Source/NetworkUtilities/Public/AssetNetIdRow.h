#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AssetNetIdRow.generated.h"

USTRUCT()
struct NETWORKUTILITIES_API FAssetNetIdRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NetId;
    
    FAssetNetIdRow();
};

