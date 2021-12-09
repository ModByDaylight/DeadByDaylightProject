#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowBase.h"
#include "TunableValue.generated.h"

USTRUCT(BlueprintType)
struct FTunableValue : public FDBDTunableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AtlantaOverriddenValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverriddenInAtlanta;
    
    DEADBYDAYLIGHT_API FTunableValue();
};

