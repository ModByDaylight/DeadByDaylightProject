#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AIDifficultyTunableRowData.generated.h"

USTRUCT()
struct DEADBYDAYLIGHT_API FAIDifficultyTunableRowData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float VeryEasy;
    
    UPROPERTY(EditAnywhere)
    float Easy;
    
    UPROPERTY(EditAnywhere)
    float Medium;
    
    UPROPERTY(EditAnywhere)
    float Hard;
    
    FAIDifficultyTunableRowData();
};

