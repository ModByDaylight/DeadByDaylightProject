#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaTutorialLevelData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaTutorialLevelData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString IconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsKillerTutorial;
    
    DEADBYDAYLIGHT_API FAtlantaTutorialLevelData();
};

