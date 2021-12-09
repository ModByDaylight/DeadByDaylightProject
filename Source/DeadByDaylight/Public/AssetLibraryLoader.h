#pragma once
#include "CoreMinimal.h"
#include "AssetLibraryLoader.generated.h"

class UAssetLibrary;

USTRUCT(BlueprintType)
struct FAssetLibraryLoader {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAssetLibrary* AssetLibrary;
    
    DEADBYDAYLIGHT_API FAssetLibraryLoader();
};

