#pragma once
#include "CoreMinimal.h"
#include "EAnalogCursorDataType.h"
#include "DBDTableRowBase.h"
#include "AnalogCursorData.generated.h"

USTRUCT(BlueprintType)
struct DBDINPUT_API FAnalogCursorData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnalogCursorDataType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScalesWithDPI;
    
    FAnalogCursorData();
};

