#pragma once
#include "CoreMinimal.h"
#include "EPromoPackContentType.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaEventElementUIData.generated.h"

USTRUCT()
struct FAtlantaEventElementUIData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EPromoPackContentType ElementType;
    
    UPROPERTY(Transient)
    FText DisplayName;
    
    UPROPERTY(Transient)
    FName NameID;
    
    UPROPERTY(Transient)
    FColor Color;
    
    DEADBYDAYLIGHT_API FAtlantaEventElementUIData();
};

