#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "PharmacyPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UPharmacyPerk : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> _searchSpeeds;
    
public:
    UPharmacyPerk();
};

