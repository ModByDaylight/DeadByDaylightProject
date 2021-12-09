#pragma once
#include "CoreMinimal.h"
#include "CustomMatchTabConfig.generated.h"

class UUMGAtlantaMatchConfigPageScrollItem;

USTRUCT(BlueprintType)
struct FCustomMatchTabConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ItemWidth;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ItemHeight;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Row;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Column;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGAtlantaMatchConfigPageScrollItem> OptionButtonClass;
    
    DBDUIVIEWSMOBILE_API FCustomMatchTabConfig();
};

