#pragma once
#include "CoreMinimal.h"
#include "EAtlantaFriendUIStatus.h"
#include "DBDTableRowBase.h"
#include "FriendStatusUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFriendStatusUIData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAtlantaFriendUIStatus FriendStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> StatusIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText StatusText;
    
    DBDUIVIEWSMOBILE_API FFriendStatusUIData();
};

