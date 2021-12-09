#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SecretBotMatchNamesDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSecretBotMatchNamesDefinition : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString name;
    
    ONBOARDING_API FSecretBotMatchNamesDefinition();
};

