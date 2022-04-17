#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "PlayerHUDInfos.generated.h"

class UUmgPlayerHud;

USTRUCT(BlueprintType)
struct FPlayerHUDInfos : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUmgPlayerHud> HUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath TouchInterfaceName;
    
    DEADBYDAYLIGHT_API FPlayerHUDInfos();
};

