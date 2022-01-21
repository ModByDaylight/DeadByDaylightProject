#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ArchivesVignetteEntry.h"
#include "ArchivesVignettes.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FArchivesVignettes : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString VignetteId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Subtitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FArchivesVignetteEntry> Entries;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UMediaSource>> CinematicPaths;
    
    DEADBYDAYLIGHT_API FArchivesVignettes();
};

