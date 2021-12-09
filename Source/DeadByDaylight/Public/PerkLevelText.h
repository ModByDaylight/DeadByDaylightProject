#pragma once
#include "CoreMinimal.h"
#include "PerkLevelText.generated.h"

USTRUCT(BlueprintType)
struct FPerkLevelText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Tunables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TextOverride;
    
    DEADBYDAYLIGHT_API FPerkLevelText();
};

