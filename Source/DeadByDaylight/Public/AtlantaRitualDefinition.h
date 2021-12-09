#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaRitualDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAtlantaRitualDefinition : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Texture;
    
    DEADBYDAYLIGHT_API FAtlantaRitualDefinition();
};

