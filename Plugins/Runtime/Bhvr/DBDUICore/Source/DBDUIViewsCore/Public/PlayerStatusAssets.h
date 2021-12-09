#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatusBloodSplatterType.h"
#include "PlayerStatusAssets.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPlayerStatusAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerStatusBloodSplatterType BloodSplatterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* BloodTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* IconTexture;
    
    DBDUIVIEWSCORE_API FPlayerStatusAssets();
};

