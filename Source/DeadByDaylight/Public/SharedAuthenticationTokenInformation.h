#pragma once
#include "CoreMinimal.h"
#include "SharedAuthenticationTokenInformation.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FSharedAuthenticationTokenInformation {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LoginProvider;
    
    UPROPERTY()
    FString AuthToken;
    
    UPROPERTY()
    FString TokenType;
    
    FSharedAuthenticationTokenInformation();
};

