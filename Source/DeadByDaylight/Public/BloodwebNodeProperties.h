#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "EBloodwebNodeContentType.h"
#include "BloodwebNodeProperties.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebNodeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBloodwebNodeContentType ContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharacterId;
    
    DEADBYDAYLIGHT_API FBloodwebNodeProperties();
};

