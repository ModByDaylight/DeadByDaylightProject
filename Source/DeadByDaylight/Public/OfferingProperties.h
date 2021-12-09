#pragma once
#include "CoreMinimal.h"
#include "ItemData.h"
#include "EOfferingType.h"
#include "OfferingEffect.h"
#include "OfferingProperties.generated.h"

USTRUCT(BlueprintType)
struct FOfferingProperties : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOfferingType OfferingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOfferingEffect> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString BigIconFilePath;
    
    DEADBYDAYLIGHT_API FOfferingProperties();
};

