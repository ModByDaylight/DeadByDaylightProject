#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ELoadoutType.h"
#include "EPlayerRole.h"
#include "FilterLoadoutData.generated.h"

class UTexture2D;

USTRUCT()
struct FFilterLoadoutData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(EditAnywhere)
    FText Title;
    
    UPROPERTY(EditAnywhere)
    TArray<EPlayerRole> Role;
    
    UPROPERTY(EditAnywhere)
    ELoadoutType LoadoutType;
    
    DEADBYDAYLIGHT_API FFilterLoadoutData();
};

