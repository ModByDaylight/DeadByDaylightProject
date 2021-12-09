#pragma once
#include "CoreMinimal.h"
#include "BeMaterialTexture.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FBeMaterialTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite)
    UTexture* Texture;
    
    BEUTIL_API FBeMaterialTexture();
};

