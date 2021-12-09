#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "EPlayerRole.h"
#include "ArchiveNodeDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArchiveNodeDefinition : public FDBDTableRowBaseWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString IconPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlayerRole PlayerRole;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CinematicId;
    
    DEADBYDAYLIGHT_API FArchiveNodeDefinition();
};

