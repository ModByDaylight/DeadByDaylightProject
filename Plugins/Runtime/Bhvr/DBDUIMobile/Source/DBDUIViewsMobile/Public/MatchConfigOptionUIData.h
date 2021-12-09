#pragma once
#include "CoreMinimal.h"
#include "ECustomMatchOptions.h"
#include "MatchConfigOptionUIData.generated.h"

class UPaperSprite;

USTRUCT()
struct FMatchConfigOptionUIData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 Id;
    
    UPROPERTY(Transient)
    FString StringId;
    
    UPROPERTY(Transient)
    FText OptionName;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UPaperSprite> OptionIcon;
    
    UPROPERTY(Transient)
    ECustomMatchOptions OptionType;
    
    DBDUIVIEWSMOBILE_API FMatchConfigOptionUIData();
};

