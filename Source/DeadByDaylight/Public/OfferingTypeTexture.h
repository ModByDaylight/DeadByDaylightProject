#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OfferingTypeTexture.generated.h"

USTRUCT(BlueprintType)
struct FOfferingTypeTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath TextureBack;
    
    DEADBYDAYLIGHT_API FOfferingTypeTexture();
};

