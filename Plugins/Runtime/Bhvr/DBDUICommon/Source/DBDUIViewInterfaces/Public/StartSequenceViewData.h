#pragma once
#include "CoreMinimal.h"
#include "EThemeColorId.h"
#include "StartSequenceViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FStartSequenceViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ThemeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EThemeColorId ThemeColorId;
    
    FStartSequenceViewData();
};

