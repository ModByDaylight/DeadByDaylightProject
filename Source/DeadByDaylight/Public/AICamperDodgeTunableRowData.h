#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAIDodgeType.h"
#include "AICamperDodgeTunableRowData.generated.h"

USTRUCT()
struct DEADBYDAYLIGHT_API FAICamperDodgeTunableRowData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 CharacterId;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    EAIDodgeType BestDodgeType;
    
    UPROPERTY(EditAnywhere)
    bool RequireInSight;
    
    UPROPERTY(EditAnywhere)
    bool RequireAttackState;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float Range;
    
    UPROPERTY(EditAnywhere)
    float AttackPlusSurvivorHalfWidth;
    
    UPROPERTY(EditAnywhere)
    float FieldOfView;
    
    FAICamperDodgeTunableRowData();
};

