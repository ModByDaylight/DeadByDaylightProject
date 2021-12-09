#pragma once
#include "CoreMinimal.h"
#include "SkuDetailsMessage.generated.h"

USTRUCT()
struct FSkuDetailsMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> BundlePrices;
    
    GENERICGAMEMESSAGES_API FSkuDetailsMessage();
};

