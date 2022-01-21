#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "WindowBlockableList.h"
#include "CruelConfinement.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UCruelConfinement : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _effectiveRadius[3];
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _blockDuration[3];
    
    UPROPERTY(EditAnywhere)
    FLinearColor _windowAuraColor;
    
    UPROPERTY(Transient)
    TMap<AGenerator*, FWindowBlockableList> _blockableLists;
    
public:
    UCruelConfinement();
};

