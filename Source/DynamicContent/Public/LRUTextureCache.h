#pragma once
#include "CoreMinimal.h"
#include "LRUTextureCache.generated.h"

class UTexture2DDynamic;

USTRUCT(BlueprintType)
struct FLRUTextureCache {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, UTexture2DDynamic*> _cachedTextures;
    
public:
    DYNAMICCONTENT_API FLRUTextureCache();
};

