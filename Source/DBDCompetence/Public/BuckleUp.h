#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "BuckleUp.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBuckleUp : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _noRecoveryColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _fullRecoveryColor;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _revealDuration[3];
    
public:
    UBuckleUp();
};

