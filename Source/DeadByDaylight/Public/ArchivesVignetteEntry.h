#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ArchivesVignetteEntry.generated.h"

USTRUCT(BlueprintType)
struct FArchivesVignetteEntry : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasAudio;
    
    DEADBYDAYLIGHT_API FArchivesVignetteEntry();
};

