#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "KindredPerk.generated.h"

UCLASS()
class DBDCOMPETENCE_API UKindredPerk : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<float> _killerAuraRevealRange;
    
public:
    UKindredPerk();
};

