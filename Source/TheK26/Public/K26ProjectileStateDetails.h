#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K26ProjectileStateDetails.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FK26ProjectileStateDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDBDTunableRowHandle VisualScaleX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDBDTunableRowHandle VisualScaleY;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDBDTunableRowHandle VisualScaleZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDBDTunableRowHandle HitboxScaleX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDBDTunableRowHandle HitboxScaleY;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDBDTunableRowHandle HitboxScaleZ;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* HitBoxStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor DebugColor;
    
    THEK26_API FK26ProjectileStateDetails();
};

