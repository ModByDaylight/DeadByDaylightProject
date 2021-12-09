#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "ArchivesVignettes.h"
#include "ArchivesJournal.generated.h"

USTRUCT(BlueprintType)
struct FArchivesJournal : public FDBDTableRowBaseWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FArchivesVignettes> Vignettes;
    
    DEADBYDAYLIGHT_API FArchivesJournal();
};

