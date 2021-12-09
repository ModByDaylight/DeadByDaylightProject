#pragma once
#include "CoreMinimal.h"
#include "ECustomMatchOptions.h"
#include "MatchConfigTabData.generated.h"

class UUMGAtlantaMatchConfigTab;
class UPaperSprite;

USTRUCT(BlueprintType)
struct FMatchConfigTabData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUMGAtlantaMatchConfigTab> Widget;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperSprite> TabIcon;
    
    UPROPERTY(EditAnywhere)
    TMap<ECustomMatchOptions, int32> DefaultOptionsID;
    
    DBDUIVIEWSMOBILE_API FMatchConfigTabData();
};

